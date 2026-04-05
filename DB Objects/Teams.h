#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

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
    void printAllTeams(std::vector<Team>& teams);

private:
    struct ColumnWidths {
        size_t id;
        size_t name;
        size_t nickname;
        size_t region;
        size_t league_id;
    };

    ColumnWidths calculateColumnWidths(const std::vector<Team>& teams);
    void printHeader(const ColumnWidths& w);
    void printTeamRow(const Team& t, const ColumnWidths& w);
};