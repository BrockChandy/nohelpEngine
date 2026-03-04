// GAME ENGINE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <thread>
#include <chrono>
#include <iostream>

void pause(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int main()
{
//First iteration of engine
    int goalamount = 0;
    int shotamount = 0;

   // std::cout << "Select 1: Toe Bash, 2: Finesse, or 3: Trivela" << std::endl;
   // std::cin >> shotSelection;
   for (int i = 0; i < 1; i++){
    srand(static_cast<unsigned int>(time(0)));
    int shotselection = rand() % 2;
    std::cout << "Shot is: " << shotselection << std::endl;
    if (shotselection == 0){
    while (shotamount < 10) {
        srand(static_cast<unsigned int>(time(0)));
        int shotrating = rand() % 21;
        int saverating = rand() % 21;
        if (shotrating > saverating) {
            std::cout << "GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            goalamount = goalamount + 1;
            shotamount = shotamount + 1;
        }
        else {
            std::cout << "NO GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            shotamount = shotamount + 1;
        }
        std::cout << std::endl;
        std::cout << "Goals scored: " << goalamount << std::endl;
        std::cout << std::endl;
        std::cout << "Shots attempted: " << shotamount << std::endl;
        std::cout << std::endl;
        pause(2000);
    }
    }
    else if (shotselection == 1) {
        while (shotamount < 10) {
        srand(static_cast<unsigned int>(time(0)));
        int shotrating = rand() % 11;
        int saverating = rand() % 21;
        if (shotrating > saverating) {
            std::cout << "GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            goalamount = goalamount + 1;
            shotamount = shotamount + 1;
        }
        else {
            std::cout << "NO GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            shotamount = shotamount + 1;
        }
        std::cout << std::endl;
        std::cout << "Goals scored: " << goalamount << std::endl;
        std::cout << std::endl;
        std::cout << "Shots attempted: " << shotamount << std::endl;
        std::cout << std::endl;
        pause(2000);
    }
    }
    else if (shotselection == 2){
        while (shotamount < 10) {
        srand(static_cast<unsigned int>(time(0)));
        int shotrating = rand() % 6;
        int saverating = rand() % 21;

        if (shotrating <= 3) {
            std::cout << "That might be the worst shot I have ever witnessed, we are not sure if the ball is still in the stadium" << std::endl;
        }

        if (shotrating > saverating) {
            std::cout << "GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            goalamount = goalamount + 1;
            shotamount = shotamount + 1;
        }
        else {
            std::cout << "NO GOAL, shot was " << shotrating << " and save is " << saverating << std::endl;
            shotamount = shotamount + 1;
        }
        std::cout << std::endl;
        std::cout << "Goals scored: " << goalamount << std::endl;
        std::cout << std::endl;
        std::cout << "Shots attempted: " << shotamount << std::endl;
        std::cout << std::endl;
        pause(2000);
    }
    }
    else {
        return 0;
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
