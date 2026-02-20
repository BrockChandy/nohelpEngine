#include <iostream>
#include <vector>
using namespace std;

struct Player{
    Player(int playerID, int kitNumber, string playerFirstName, string playerLastName, string teamName, string playerPosition, float playerRating)
        : playerID(playerID),
          kitNumber(kitNumber),
          playerFirstName(playerFirstName),
          playerLastName(playerLastName),
          teamName(teamName),
          playerPosition(playerPosition),
          playerRating(playerRating)
    {
    }
    int playerID = 1;
    int kitNumber = 1;
    int goalsScored = 0;
    string playerFirstName = "";
    string playerLastName = "";
    string teamName = "";
    string playerPosition = "";
    float playerRating = 0.0;
};

vector<Player> playerList = {
    Player(1, 1,"Dean", "Henderson", "Crystal Palace", "GK", 3.5),
    Player(2, 31,"Remi", "Matthews", "Crystal Palace", "GK", 2 ),
    Player(3, 44,"Walter", "Benitez", "Crystal Palace", "GK", 3 ),
    Player(4, 2,"Daniel", "Munoz", "Crystal Palace", "RWB", 2.5 ),
    Player(5, 3,"Tyrick", "Mitchell", "Crystal Palace", "LWB", 3.5 ),
    Player(6, 5,"Maxence", "Lacroix", "Crystal Palace", "CB", 3.5 ),
    Player(7, 17,"Nathaniel", "Clyne", "Crystal Palace", "RWB", 2.5 ),
    Player(8, 23,"Jaydee", "Canvot", "Crystal Palace", "CB", 1.5 ),
    Player(9, 24,"Borna", "Sosa", "Crystal Palace", "LWB", 3 ),
    Player(10, 26,"Chris", "Richards", "Crystal Palace", "CB", 3 ),
    Player(11, 34,"Chadi", "Riad", "Crystal Palace", "CB", 2.5 ),
    Player(12, 7,"Ismaila", "Sarr", "Crystal Palace", "CAM", 3 ),
    Player(13, 8,"Jefferson", "Lerma", "Crystal Palace", "CM", 3.5 ),
    Player(14, 10,"Yeremy", "Pino", "Crystal Palace", "CAM", 3.5 ),
    Player(15, 12,"Christantus", "Uche", "Crystal Palace", "CAM", 1.5 ),
    Player(16, 18,"Daichi", "Kamada", "Crystal Palace", "CAM", 3.5 ),
    Player(17, 19,"Will", "Hughes", "Crystal Palace", "CM", 3 ),
    Player(18, 20,"Adam", "Wharton", "Crystal Palace", "CM", 2.5 ),
    Player(19, 28,"Cheick", "Doucoure", "Crystal Palace", "CM", 3.5 ),
    Player(20, 55,"Justin", "Devenny", "Crystal Palace", "CAM", 1.5 ),
    Player(21, 9,"Eddie", "Nketiah", "Crystal Palace", "ST", 3.5 ),
    Player(22, 11,"Brennan", "Johnson", "Crystal Palace", "CAM", 3.5 ),
    Player(23, 14,"Jean-Philippe", "Mateta", "Crystal Palace", "ST", 3 ),
    Player(24, 22,"Jorgen", "Strand Larsen", "Crystal Palace", "ST", 3 ),
    Player(25, 29,"Evann", "Guessand", "Crystal Palace", "CAM", 2.5 )












};

void storage(){

	//auto playerList = vector<Player*>();

    
    /*
    playerList.push_back(new Player(31,"Remi", "Matthews", "Crystal Palace", "GK", 2 ));
    playerList.push_back(new Player(44,"Walter", "Benitez", "Crystal Palace", "GK", 3 ));
    playerList.push_back(new Player(2,"Daniel", "Munoz", "Crystal Palace", "RWB", 2.5 ));
    playerList.push_back(new Player(3,"Tyrick", "Mitchell", "Crystal Palace", "LWB", 3.5 ));
    playerList.push_back(new Player(5,"Maxence", "Lacroix", "Crystal Palace", "CB", 3.5 ));
    playerList.push_back(new Player(17,"Nathaniel", "Clyne", "Crystal Palace", "RWB", 2.5 ));
    playerList.push_back(new Player(23,"Jaydee", "Canvot", "Crystal Palace", "CB", 1.5 ));
    playerList.push_back(new Player(24,"Borna", "Sosa", "Crystal Palace", "LWB", 3 ));
    playerList.push_back(new Player(26,"Chris", "Richards", "Crystal Palace", "CB", 3 ));
    playerList.push_back(new Player(34,"Chadi", "Riad", "Crystal Palace", "CB", 2.5 ));
    playerList.push_back(new Player(7,"Ismaila", "Sarr", "Crystal Palace", "CAM", 3 ));
    playerList.push_back(new Player(8,"Jefferson", "Lerma", "Crystal Palace", "CM", 3.5 ));
    playerList.push_back(new Player(10,"Yeremy", "Pino", "Crystal Palace", "CAM", 3.5 ));
    playerList.push_back(new Player(12,"Christantus", "Uche", "Crystal Palace", "CAM", 1.5 ));
    playerList.push_back(new Player(18,"Daichi", "Kamada", "Crystal Palace", "CAM", 3.5 ));
    playerList.push_back(new Player(19,"Will", "Hughes", "Crystal Palace", "CM", 3 ));
    playerList.push_back(new Player(20,"Adam", "Wharton", "Crystal Palace", "CM", 2.5 ));
    playerList.push_back(new Player(28,"Cheick", "Doucoure", "Crystal Palace", "CM", 3.5 ));
    playerList.push_back(new Player(55,"Justin", "Devenny", "Crystal Palace", "CAM", 1.5 ));
    playerList.push_back(new Player(9,"Eddie", "Nketiah", "Crystal Palace", "ST", 3.5 ));
    playerList.push_back(new Player(11,"Brennan", "Johnson", "Crystal Palace", "CAM", 3.5 ));
    playerList.push_back(new Player(14,"Jean-Philippe", "Mateta", "Crystal Palace", "ST", 3 ));
    playerList.push_back(new Player(22,"Jorgen", "Strand Larsen", "Crystal Palace", "ST", 3 ));
    playerList.push_back(new Player(29,"Evann", "Guessand", "Crystal Palace", "CAM", 2.5 ));

    playerList.push_back(new Player(1,"David", "Raya", "Arsenal", "GK", 3 ));
    playerList.push_back(new Player(13,"Kepa", "Arrizabalaga", "Arsenal", "GK", 2.5 ));
    playerList.push_back(new Player(4,"Benjamin", "White", "Arsenal", "RB", 3 ));
    playerList.push_back(new Player(12,"Jurrien", "Timber", "Arsenal", "RB", 2.5 ));
    playerList.push_back(new Player(6,"", "Gabriel", "Arsenal", "CB", 3 ));
    playerList.push_back(new Player(2,"William", "Saliba", "Arsenal", "CB", 3.5 ));
    playerList.push_back(new Player(5,"Piero", "Hincapie", "Arsenal", "CB", 2.5 ));
    playerList.push_back(new Player(33,"Riccardo", "Calafiori", "Arsenal", "LB", 2.5 ));
    playerList.push_back(new Player(16,"Christian", "Norgaard", "Arsenal", "DM", 2.5 ));
    playerList.push_back(new Player(41,"Declan", "Rice", "Arsenal", "DM", 4.5 ));
    playerList.push_back(new Player(8,"Martin", "Odegaard", "Arsenal", "CM", 4 ));
    playerList.push_back(new Player(23,"Mikel", "Merino", "Arsenal", "CM", 3 ));
    playerList.push_back(new Player(36,"Martin", "Zubimendi", "Arsenal", "CM", 3 ));
    playerList.push_back(new Player(29,"Kai", "Havertz", "Arsenal", "CM", 3 ));
    playerList.push_back(new Player(49,"Myles", "Lewis-Skelly", "Arsenal", "CM", 2.5 ));
    playerList.push_back(new Player(7,"Bukayo", "Saka", "Arsenal", "CAM", 4 ));
    playerList.push_back(new Player(20,"Noni", "Madueke", "Arsenal", "CAM", 2.5 ));
    playerList.push_back(new Player(10,"Eberechi", "Eze", "Arsenal", "CAM", 2.5 ));
    playerList.push_back(new Player(19,"Leandro", "Trossard", "Arsenal", "CAM", 3 ));
    playerList.push_back(new Player(11,"Gabriel", "Martinelli", "Arsenal", "CAM", 3.5 ));
    playerList.push_back(new Player(9,"Gabriel", "Jesus", "Arsenal", "ST", 3.5 ));
    playerList.push_back(new Player(14,"Viktor", "Gyokeres", "Arsenal", "ST", 3.5 ));*/
}