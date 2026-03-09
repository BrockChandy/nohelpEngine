#pragma once

#include <vector>
#include <string>
#include <iostream>

#include "DatabaseManager.h"

struct Team {
    int id;
    std::string name;
    std::string nickname;
    std::string region;
    int league_id;
};

class Teams {

public:
    Teams();
    std::vector<Team> getAllTeams(MYSQL* conn);
    void printAllTeams(std::vector<Team> teams);
};