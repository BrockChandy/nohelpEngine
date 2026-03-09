#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

#include "DatabaseManager.h"

struct Player {
        int id;
        std::string first_name;
        std::string last_name;
        std::string dob;
        std::string nationality;
        std::string height; // in inches
        std::string weight;
        std::string preferred_foot;
        std::string personality;
        std::string position;
        int team_id;
    };
    
class Players {

public:
    Players();
    std::vector<Player> getAllPlayers(MYSQL* conn);
    void printAllPlayers(const std::vector<Player>& players);

private:
    struct ColumnWidths {
        size_t id;
        size_t first;
        size_t last;
        size_t dob;
        size_t nationality;
        size_t height;
        size_t weight;
        size_t foot;
        size_t personality;
        size_t position;
        size_t team;
    };

    ColumnWidths calculateColumnWidths(const std::vector<Player>& players);
    void printHeader(const ColumnWidths& w);
    void printPlayerRow(const Player& p, const ColumnWidths& w);
};