#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <windows.h>
#include <C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h>

class DatabaseManager {
private:
    MYSQL* conn;

public:
    DatabaseManager();
    bool connect();
    MYSQL *getConnection() { return conn; }
    void close();
};