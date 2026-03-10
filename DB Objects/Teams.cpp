#include "Teams.h"

Teams::Teams() {
    // Constructor can be used for initialization if needed
}

std::vector<Team> Teams::getAllTeams(MYSQL* conn) {
    std::vector<Team> teams;

    mysql_query(conn, "SELECT * FROM Team");

    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {

        Team t;

        t.id = atoi(row[0]);
        t.name = row[1];
        t.nickname = row[2];
        t.region = row[3];
        t.league_id = atoi(row[4]);

        teams.push_back(t);
    }

    mysql_free_result(result);

    return teams;
}

void Teams::printAllTeams(std::vector<Team>& teams) {
    std::cout << "\nAll Teams:\n\n" << std::endl;
    ColumnWidths widths = calculateColumnWidths(teams);
    printHeader(widths);
    for (const auto& t : teams) {
        printTeamRow(t, widths);
    }
}

Teams::ColumnWidths Teams::calculateColumnWidths(const std::vector<Team>& teams) {
    ColumnWidths w;

    w.id = 2; // "ID"
    w.name = std::string("Name").length();
    w.nickname = std::string("Nickname").length();
    w.region = std::string("Region").length();
    w.league_id = std::string("League ID").length();

    for (const auto& t : teams) {
        w.id = std::max(w.id, std::to_string(t.id).length());
        w.name = std::max(w.name, t.name.length());
        w.nickname = std::max(w.nickname, t.nickname.length());
        w.region = std::max(w.region, t.region.length());
        w.league_id = std::max(w.league_id, std::to_string(t.league_id).length());
    }

    return w;
}

void Teams::printHeader(const ColumnWidths& w) {
    std::cout << std::left
              << std::setw(w.id + 2) << "ID"
              << std::setw(w.name + 2) << "Name"
              << std::setw(w.nickname + 2) << "Nickname"
              << std::setw(w.region + 2) << "Region"
              << std::setw(w.league_id + 2) << "League ID"
              << std::endl;

    int total_width = w.id + w.name + w.nickname + w.region + w.league_id + 10;
    std::cout << std::string(total_width, '-') << std::endl;
}

void Teams::printTeamRow(const Team& t, const ColumnWidths& w) {
    std::cout << std::left
              << std::setw(w.id + 2) << t.id
              << std::setw(w.name + 2) << t.name
              << std::setw(w.nickname + 2) << t.nickname
              << std::setw(w.region + 2) << t.region
              << std::setw(w.league_id + 2) << t.league_id
              << std::endl;
}