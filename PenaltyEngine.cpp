// GAME ENGINE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <thread>
#include <chrono>
#include <iostream>
#include <string>

void pause(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int main()
{
//First iteration of engine
    std::string team1 = "Palace";
    std::string team2 = "Brighton";
    int goalamount1 = 0;
    int shotamount1 = 0;
    int goalamount2 = 0;
    int shotamount2 = 0;
   // std::cout << "Select 0: Toe Bash, 1: Finesse, or 2: Trivela" << std::endl;
   // std::cin >> shotSelection;
   // srand(static_cast<unsigned int>(time(0)));
   // int shotselection = rand() % 2;
   // std::cout << "Shot is: " << shotselection << std::endl << std::endl;
   // if (shotselection == 0){
    while (goalamount1 < 5 || goalamount2 < 5) {
        for (int i = 0; i < 1; i++){
        srand(static_cast<unsigned int>(time(0)));
        int shotrating1 = rand() % 21;
        int saverating1 = rand() % 21;
        int shotdirection1 = rand() % 2;
        std::string sshotdirection1 = "";

        if (shotdirection1 == 0){
        sshotdirection1 = "left";
       }
       if (shotdirection1 == 1){
        sshotdirection1 = "middle";
       }
       if (shotdirection1 == 2){
        sshotdirection1 = "right";
       }
        /*if (shotrating1 == 0){
            std::cout << "That shot was so simple and now a car alarm is going off" << std::endl;
        }*/
       if (goalamount2 == 3 && goalamount1 == 0 && shotamount1 == 3 || 
        goalamount2 == 3 && goalamount1 == 1 && shotamount1 >= 3){
           std::cout << "This is to keep the team and fans hopes alive..." << std::endl;
           std::cout << std::endl;
           pause(3000);
       }
       else if (goalamount1 > goalamount2 && shotamount1 == 4 ||
         goalamount1 == 3 && goalamount2 == 1 && shotamount1 >= 3 ||
         goalamount1 == 2 && goalamount2 == 0 && shotamount1 >= 3){
        std::cout << "If he scores here, the fans will need to be held back from the pitch!" << std::endl;
        std::cout << std::endl;
        pause(3000);
       }
       else {
        std::cout << "He walks up to take the shot..." << std::endl;
           std::cout << std::endl;
           pause(3000);
       }
        if (shotrating1 > saverating1) {
            goalamount1 = goalamount1 + 1;
            shotamount1 = shotamount1 + 1;
            std::cout << "GOAL, he shot " << sshotdirection1 << " for " << team1 << ", the score is " << goalamount1 << " to " << goalamount2 << " " << shotamount1 << std::endl; 
            std::cout << std::endl;
        }
        else {
           // std::cout << "NO GOAL, shot was " << shotrating1 << " and save is " << saverating1 << std::endl;
           shotamount1 = shotamount1 + 1;
           std::cout << "NO GOAL, he shot " << sshotdirection1 << " for " << team1 <<", the score is " << goalamount1 << " to " << goalamount2 << " " << shotamount1 << std::endl; 
           std::cout << std::endl;
        }
        /*std::cout << std::endl;
        std::cout << "Goals scored for team 1: " << goalamount1 << std::endl;
        std::cout << std::endl;
        std::cout << "Shots attempted for team 1: " << shotamount1 << std::endl;
        std::cout << std::endl;*/
        pause(2000);
        if (goalamount1 < goalamount2 && shotamount1 == 5){
            std::cout << team2 << " has won " << goalamount2 << " to " << goalamount1 << std::endl;
            return 0;
        }
        else if (goalamount1 >= 4 && goalamount2 <= 1 && shotamount1 >= 4 || goalamount1 >= 3 && goalamount2 <= 1 && shotamount1 == 5){
            std::cout << team1 << " has won " << goalamount1 << " to " << goalamount2 << std::endl;
            return 0;
        }
        else{
     for (int i = 0; i < 1; i++){
   // srand(static_cast<unsigned int>(time(0)));
   // int shotselection = rand() % 2;
   // std::cout << "Shot is: " << shotselection << std::endl << std::endl;
   // if (shotselection == 0){
        srand(static_cast<unsigned int>(time(0)));
        int shotrating2 = rand() % 21;
        int saverating2 = rand() % 21;
        int shotdirection2 = rand() % 2;
        std::string sshotdirection2 = "";
        /*if (shotrating2 == 0){
            std::cout << "That shot was so simple and now a car alarm is going off" << std::endl;
        }*/
       if (shotdirection2 == 0){
        sshotdirection2 = "left";
       }
       if (shotdirection2 == 1){
        sshotdirection2 = "middle";
       }
       if (shotdirection2 == 2){
        sshotdirection2 = "right";
       }
       if (goalamount1 == 3 && goalamount2 <= 1 && shotamount1 >= 3 || 
        goalamount1 == 3 && goalamount2 == 2 && shotamount1 >= 5 ||
        goalamount1 == 2 && goalamount2 == 0 && shotamount1 >= 4 ||
        goalamount1 == 2 && goalamount2 == 0 && shotamount1 >= 3 ||
        goalamount1 > goalamount2 && shotamount1 >= 5){
           std::cout << "This is to keep the team and fans hopes alive..." << std::endl;
           std::cout << std::endl;
           pause(3000);
        }
       else if (goalamount1 == goalamount2 && shotamount1 >= 5){
        std::cout << "If he makes this, he will send his team into the history books!" << std::endl;
        std::cout << std::endl;
        pause(3000);
       }
       else {
        std::cout << "He walks up to take the shot..." << std::endl;
           std::cout << std::endl;
           pause(3000);
       }
        if (shotrating2 > saverating2) {
            goalamount2 = goalamount2 + 1;
            shotamount2 = shotamount2 + 1;
            std::cout << "GOAL, he shot " << sshotdirection2 << " for " << team2 <<", the score is " << goalamount1 << " to " << goalamount2 << " " << shotamount2 << std::endl; 
            std::cout << std::endl;
            }
            else {
           shotamount2 = shotamount2 + 1;
                std::cout << "NO GOAL, he shot " << sshotdirection2 << " for " << team2 << ", score is " << goalamount1 << " to " << goalamount2 << " " << shotamount2 << std::endl; 
                std::cout << std::endl;
            }
        }
        /*std::cout << std::endl;
        std::cout << "Goals scored for team 2: " << goalamount2 << std::endl;
        std::cout << std::endl;
        std::cout << "Shots attempted for team 2: " << shotamount2 << std::endl;
        std::cout << std::endl;*/
        pause(2000);
        if (goalamount2 > goalamount1 && shotamount1 >= 5|| 
            goalamount2 == 3 && goalamount1 == 0 && shotamount1 >= 3 ||
            goalamount2 == 3 && goalamount1 == 1 && shotamount1 >= 4){
            std::cout << team2 << " has won " << goalamount2 << " to " << goalamount1  << std::endl;
            return 0;
        }
        else if (goalamount1 >= 3 && goalamount2 == 0 && shotamount1 >= 3 ||
             goalamount2 < goalamount1 && shotamount1 >=5|| 
             goalamount1 >= 3 && goalamount2 <= 1 && shotamount1 >= 4 ||
              goalamount1 == 4 && goalamount2 == 2 && shotamount1 >= 5 ||
            goalamount1 == 2 && goalamount2 == 0 && shotamount1 >= 4){
            std::cout << team1 << " has won " << goalamount1 << " to " << goalamount2  << std::endl;
            return 0;
        }
        else {
            continue;
        }
    }
}
}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
