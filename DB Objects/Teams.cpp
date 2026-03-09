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

void Teams::printAllTeams(std::vector<Team> teams) {
    std::cout << "All Teams:" << std::endl;
    std::cout << "ID | Name | Nickname | Region | League ID" << std::endl;
    for (const auto& t : teams) {
        std::cout << t.id << " | "
                  << t.name << " | "
                  << t.nickname << " | "
                  << t.region << " | "
                  << t.league_id << std::endl;
    }
}