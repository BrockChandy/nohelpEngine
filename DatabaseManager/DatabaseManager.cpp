// DatabaseManager.cpp
#include "DatabaseManager.h"
#include <cstdio>
#include <sstream>
#include <iostream>

std::string DatabaseManager::runPythonScript(const std::string& command) {
    std::string output;
    char buffer[256];

    FILE* pipe = _popen(command.c_str(), "r");

    if (!pipe) {
        std::cerr << "Failed to run python script\n";
        return "";
    }

    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        output += buffer;
    }

    _pclose(pipe);

    return output;
}

std::vector<Player> DatabaseManager::getPlayers() {
    std::vector<Player> players;

    std::string command =
        "python ..\\..\\SQLCONNECTION\\SQLCONNECTION.py";

    std::string result = runPythonScript(command);

    std::stringstream ss(result);
    std::string line;

    while (std::getline(ss, line)) {

        std::stringstream row(line);
        std::string value;

        Player p;

        std::getline(row, value, ',');
        p.id = std::stoi(value);
        std::getline(row, p.first_name, ',');
        std::getline(row, p.last_name, ',');
        std::getline(row, p.dob, ',');
        std::getline(row, p.nationality, ',');
        std::getline(row, value, ',');
        p.height_ft = std::stoi(value);
        std::getline(row, value, ',');
        p.height_in = std::stoi(value);
        std::getline(row, value, ',');
        p.weight = std::stof(value);
        std::getline(row, p.preferred_foot, ',');
        std::getline(row, p.personality, ',');
        std::getline(row, p.position, ',');

        players.push_back(p);
    }

    return players;
}