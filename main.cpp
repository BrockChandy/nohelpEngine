#include <iostream>

#include "DB Objects/DatabaseManager.h"
#include "DB Objects/Players.h"
#include "DB Objects/Teams.h"
#include "DB Objects/Leagues.h"

int main() {

    DatabaseManager db;
    Players playersObj;
    Teams teamObj;
    Leagues leagueObj;


    if (!db.connect()) {
        return 1;
    }

    std::vector<Player> players = playersObj.getAllPlayers(db.getConnection());
    playersObj.printAllPlayers(players);

    std::vector<Team> teams = teamObj.getAllTeams(db.getConnection());
    teamObj.printAllTeams(teams);

    std::vector<League> leagues = leagueObj.getAllLeagues(db.getConnection());
    leagueObj.printAllLeagues(leagues);

    db.close();
}