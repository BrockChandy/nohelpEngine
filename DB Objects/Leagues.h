#pragma once

#include <vector>
#include <string>
#include <iostream>

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
    void printAllLeagues(std::vector<League> leagues);
};