#include "Players.h"

Players::Players() {

}

std::vector<Player> Players::getAllPlayers(MYSQL* conn) {
    std::vector<Player> players;

    mysql_query(conn, "SELECT * FROM Player");

    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {

        Player p;

        p.id = atoi(row[0]);
        p.first_name = row[1];
        p.last_name = row[2];
        p.dob = row[3];
        p.nationality = row[4];
        p.height = row[5];
        p.weight = row[6];
        p.preferred_foot = row[7];
        p.personality = row[8];
        p.position = row[9];
        p.team_id = atoi(row[10]);

        players.push_back(p);
    }

    mysql_free_result(result);

    return players;
}

void Players::printAllPlayers(const std::vector<Player>& players) {

    std::cout << "\nAll Players\n\n";

    ColumnWidths widths = calculateColumnWidths(players);

    printHeader(widths);

    for (const auto& p : players) {
        printPlayerRow(p, widths);
    }
}

Players::ColumnWidths Players::calculateColumnWidths(const std::vector<Player>& players) {

    ColumnWidths w;

    w.id = 2;
    w.first = std::string("First Name").length();
    w.last = std::string("Last Name").length();
    w.dob = 3;
    w.nationality = std::string("Nationality").length();
    w.height = std::string("Height").length();
    w.weight = std::string("Weight").length();
    w.foot = std::string("Foot").length();
    w.personality = std::string("Personality").length();
    w.position = std::string("Position").length();
    w.team = 4;

    for (const auto& p : players) {

        w.id = std::max(w.id, std::to_string(p.id).length());
        w.first = std::max(w.first, p.first_name.length());
        w.last = std::max(w.last, p.last_name.length());
        w.dob = std::max(w.dob, p.dob.length());
        w.nationality = std::max(w.nationality, p.nationality.length());
        w.height = std::max(w.height, p.height.length());
        w.weight = std::max(w.weight, p.weight.length());
        w.foot = std::max(w.foot, p.preferred_foot.length());
        w.personality = std::max(w.personality, p.personality.length());
        w.position = std::max(w.position, p.position.length());
        w.team = std::max(w.team, std::to_string(p.team_id).length());
    }

    return w;
}

void Players::printHeader(const ColumnWidths& w) {

    std::cout << std::left
              << std::setw(w.id + 2) << "ID"
              << std::setw(w.first + 2) << "First Name"
              << std::setw(w.last + 2) << "Last Name"
              << std::setw(w.dob + 2) << "DOB"
              << std::setw(w.nationality + 2) << "Nationality"
              << std::setw(w.height + 2) << "Height"
              << std::setw(w.weight + 2) << "Weight"
              << std::setw(w.foot + 2) << "Foot"
              << std::setw(w.personality + 2) << "Personality"
              << std::setw(w.position + 2) << "Position"
              << std::setw(w.team + 2) << "Team"
              << std::endl;

    int total_width =
        w.id + w.first + w.last + w.dob +
        w.nationality + w.height + w.weight +
        w.foot + w.personality + w.position +
        w.team + 22;

    std::cout << std::string(total_width, '-') << std::endl;
}

void Players::printPlayerRow(const Player& p, const ColumnWidths& w) {

    std::cout << std::left
              << std::setw(w.id + 2) << p.id
              << std::setw(w.first + 2) << p.first_name
              << std::setw(w.last + 2) << p.last_name
              << std::setw(w.dob + 2) << p.dob
              << std::setw(w.nationality + 2) << p.nationality
              << std::setw(w.height + 2) << p.height
              << std::setw(w.weight + 2) << p.weight
              << std::setw(w.foot + 2) << p.preferred_foot
              << std::setw(w.personality + 2) << p.personality
              << std::setw(w.position + 2) << p.position
              << std::setw(w.team + 2) << p.team_id
              << std::endl;
}