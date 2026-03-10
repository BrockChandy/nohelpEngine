#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

#include "DatabaseManager.h"

struct League {
    int id;
    std::string name;
    std::string country;
    int reputation_position;
    double reputation_rating;
};


class Leagues {

public:
    Leagues();
    std::vector<League> getAllLeagues(MYSQL* conn);
    void printAllLeagues(std::vector<League>& leagues);

private:
    struct ColumnWidths {
        size_t id;
        size_t name;
        size_t country;
        size_t reputation_position;
        size_t reputation_rating;
    };

    ColumnWidths calculateColumnWidths(const std::vector<League>& leagues);
    void printHeader(const ColumnWidths& w);
    void printLeagueRow(const League& l, const ColumnWidths& w);
};