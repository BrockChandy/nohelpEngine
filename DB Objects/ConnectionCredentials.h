#include <string>
#include <iostream>
#include <windows.h>
#include <C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h>

class ConnectionCredentials {
public:
    std::string HOST = "100.118.231.100";
    std::string USER = "gabe";
    std::string PASSWORD = "Database_2026!";
    std::string DATABASE = "FM_Engine";
    int PORT = 3306;
};