#include <iostream>
#include <vector>
#include "playerconfig.h"
using namespace std;

//playerOne info
/*struct Player{
    Player(int number, string playerFirstName, string playerLastName, string teamName, string playerPosition, float playerRating)
        : number(number),
          playerFirstName(playerFirstName),
          playerLastName(playerLastName),
          teamName(teamName),
          playerPosition(playerPosition),
          playerRating(playerRating)
    {
    }

    int number = 1;
    int goalsScored = 0;
    string playerFirstName = "";
    string playerLastName = "";
    string teamName = "";
    string playerPosition = "";
    float playerRating = 0.0;
};*/

    struct fotreetree{
        fotreetree()
        {
        string GK1 = "GK";
        string LB1 = "LB";
        string CB1 = "CB";
        string CB2 = "CB";
        string RB1 = "RB";
        string DM1 = "DM";
        string CM1 = "CM";
        string CM2 = "CM";
        string CAM1 = "CAM";
        string CAM2 = "CAM";
        string ST1 = "ST";
    }
    };
    const string fourthreethree = ("GK, LB, CB, CB, RB, DM, CM, CM, CAM, CAM, ST");
// auto player2 = Player(2, "Player 2");
// Player player3 = Player(3, "Player 3");

// player2.goalsScored++;
// cout << player2.playerName << " just winned or something" << endl;

// auto playerList = vector<Player>();
// playerList.push_back(player3);
// player3.playerName = "dumb";


/*
// cout << playerList.size() << " players" << endl;

// for (int i = 0; i < playerList.size(); i++) {
//     cout << playerList[i].playerName << endl;
// }

//int playerOneScores= 0;
// goal value and calculation
//int goalWorth = 1;
//int goalsScored = goalsScored + goalWorth;

char playerTwo;
int playerTwoNumber = 2;
int goalsScoredplayerTwo = 0; //1 + goalsScored;
string  playerTwoName = "Player 2";

char playerThree;
int playerThreeNumber = 3;
int goalsScoredplayerThree = 0; //1 + goalsScored;
string  playerThreeName = "Player 3";

char playerFour;
int playerFourNumber = 4;
int goalsScoredplayerFour = 0; //1 + goalsScored;
string  playerFourName = "Player 4";

char playerFive;
int playerFiveNumber = 5;
int goalsScoredplayerFive = 0; //1 + goalsScored;
string  playerFiveName = "Player 5";

char playerSix;
int playerSixNumber = 6;
int goalsScoredplayerSix = 0; //1 + goalsScored;
string  playerSixName = "Player 6";

char playerSeven;
int playerSevenNumber = 3;
int goalsScoredplayerSeven = 0; //1 + goalsScored;
string  playerSevenName = "Player 7";

char playerEight;
int playerEightNumber = 3;
int goalsScoredplayerEight = 0; //1 + goalsScored;
string  playerEightName = "Player 8";
*/

string findEnd(int x) {
    int last = (x % 10); // find last easily, all last 4 and up just get th on top
    int lastTwo = (x % 100);

    if (lastTwo == 11 || lastTwo == 12 || lastTwo == 13) return "th";
    // add special condition (11 i think)  here/before if loop and final case
    // first 3 cases
    if (last == 1) return "st";
    if (last == 2) return "nd";
    if (last == 3) return "rd";
    //else
    return "th";
}
int main(){
    /*auto playerList = vector<Player*>();
    
    playerList.push_back(new Player(1,"Dean", "Henderson", "Crystal Palace", "GK", 3.5));
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
    playerList.push_back(new Player(14,"Viktor", "Gyokeres", "Arsenal", "ST", 3.5 ));
    //push_front
  */


    cout << "Choose your GK!" << endl;

    for (int i = 0; i < playerList.size(); i++) {
        if (playerList[i].teamName=="Crystal Palace" & playerList[i].playerPosition=="GK"){
        cout << playerList[i].playerRating << ", " <<  playerList[i].playerFirstName << " " << playerList[i].playerLastName;
        cout << endl;
    }
        // the goal is to compare to get the best player at each position automatically
        // if a position needs multiple positions, the goal is to not allow duplicates
        // also why does LB go to the bottom?
/*
        if (playerList[i].teamName=="Arsenal" & playerList[i].playerPosition=="GK" & playerList[i].playerRating >= 3){
        cout << playerList[i].playerFirstName << " " << playerList[i].playerLastName << ", " << playerList[i].number << ", " << playerList[i].playerPosition << ", " << playerList[i].playerRating;
        cout << endl;
    }
        if (playerList[i].teamName=="Arsenal" & playerList[i].playerPosition=="LB"){
        cout << playerList[i].playerFirstName << " " << playerList[i].playerLastName << ", " << playerList[i]->number << ", " << playerList[i]->playerPosition << ", " << playerList[i]->playerRating;
        cout << endl;
    }
        if (playerList[i]->teamName=="Arsenal" & playerList[i]->playerPosition=="CB"){
        cout << playerList[i]->playerFirstName << " " << playerList[i]->playerLastName << ", " << playerList[i]->number << ", " << playerList[i]->playerPosition << ", " << playerList[i]->playerRating;
        cout << endl;
    }*/
    }
    cout << endl;
    //cout << fourthreethree;

    //cout << playerList[0].playerName << endl;

    // auto player2 = Player(2, "Player 2");
    // string* test = &player2.playerName;
    // cout << test << 
    // while (goalsScoredplayerOne < 2) {
    // int randomNum = rand() % 201;
    // if (randomNum == 1){
    //     goalsScoredplayerOne = goalsScoredplayerOne + 1;
    //     cout << "Goal for " << playerOneName << "! That's his " << goalsScoredplayerOne << findEnd(goalsScoredplayerOne) << " goal of the season!" << "\n";
    // }
    // if (randomNum == 2) {
    //     goalsScoredplayerTwo = goalsScoredplayerTwo + 1;
    //     cout << "Goal for " << playerTwoName << "! That's his " << goalsScoredplayerTwo << findEnd(goalsScoredplayerTwo) << " goal of the season!" << "\n";
    // }
    // if (randomNum == 3) {
    //     goalsScoredplayerThree = goalsScoredplayerThree + 1;
    //     cout << "Goal for " << playerThreeName << "! That's his " << goalsScoredplayerThree << findEnd(goalsScoredplayerThree) << " goal of the season!" << "\n";
    // }
    // else {
    //     cout << "No goal! " << "\n" ;
    // }
    // }
    return 0;
}