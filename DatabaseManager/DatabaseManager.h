// DatabaseManager.h
#ifndef DATABASE_MANAGER_H
#define DATABASE_MANAGER_H

#include <string>
#include <vector>

struct Player {
    int id;
    std::string first_name;
    std::string last_name;
    std::string dob;
    std::string nationality;
    int height_ft;
    int height_in;
    float weight;
    std::string preferred_foot;
    std::string personality;
    std::string position;
    int team_id;

};

class DatabaseManager {

private:
    std::string runPythonScript(const std::string& command);

public:
    std::vector<Player> getPlayers();
};

#endif