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

void Leagues::printAllLeagues(std::vector<League> leagues){
    std::cout << "All Leagues:" << std::endl;
    std::cout << "ID | Name | Country | Reputation Position | Reputation Rating" << std::endl;
    for (auto& l : leagues) {
        std::cout << l.id << " | "
                  << l.name << " | "
                  << l.country << " | "
                  << l.reputation_position << " | "
                  << l.reputation_rating  << std::endl;
    }
}