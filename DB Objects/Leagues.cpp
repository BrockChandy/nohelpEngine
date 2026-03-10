#include "Leagues.h"

Leagues::Leagues() {

}

std::vector<League> Leagues::getAllLeagues(MYSQL* conn) {
    std::vector<League> leagues;

    mysql_query(conn, "SELECT * FROM League");

    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {

        League l;

        l.id = atoi(row[0]);
        l.name = row[1];
        l.country = row[2];
        l.reputation_position = atoi(row[3]);
        l.reputation_rating = atof(row[4]);

        leagues.push_back(l);
    }

    mysql_free_result(result);

    return leagues;
}

void Leagues::printAllLeagues(std::vector<League>& leagues){
    std::cout << "\nAll Leagues:\n\n" << std::endl;
    ColumnWidths widths = calculateColumnWidths(leagues);
    printHeader(widths);
    for (const auto& l : leagues) {
        printLeagueRow(l, widths);
    }
}

Leagues::ColumnWidths Leagues::calculateColumnWidths(const std::vector<League>& leagues) {

    ColumnWidths w;

    w.id = 2;
    w.name = std::string("Name").length();
    w.country = std::string("Country").length();
    w.reputation_position = std::string("Reputation Position").length();
    w.reputation_rating = std::string("Reputation Rating").length();

    for (const auto& l : leagues) {

        w.id = std::max(w.id, std::to_string(l.id).length());
        w.name = std::max(w.name, l.name.length());
        w.country = std::max(w.country, l.country.length());
        w.reputation_position = std::max(w.reputation_position, std::to_string(l.reputation_position).length());
        w.reputation_rating = std::max(w.reputation_rating, std::to_string(l.reputation_rating).length());
    }

    return w;
}

void Leagues::printHeader(const ColumnWidths& w) {
    std::cout << std::left
              << std::setw(w.id+ 2) << "ID"
              << std::setw(w.name+ 2) << "Name"
              << std::setw(w.country+ 2) << "Country"
              << std::setw(w.reputation_position+ 2) << "Reputation Position"
              << std::setw(w.reputation_rating+ 2) << "Reputation Rating" << std::endl;

    int total_width = w.id + w.name + w.country + w.reputation_position + w.reputation_rating + 10;
    std::cout << std::string(total_width, '-') << std::endl;

}

void Leagues::printLeagueRow(const League& l, const ColumnWidths& w) {
    std::cout << std::left
              << std::setw(w.id+ 2) << l.id
              << std::setw(w.name+ 2) << l.name 
              << std::setw(w.country+ 2) << l.country
              << std::setw(w.reputation_position+ 2) << l.reputation_position
              << std::setw(w.reputation_rating+ 2) << l.reputation_rating << std::endl;
}