#include "DatabaseManager.h"
#include "ConnectionCredentials.h"
#include <iostream>

DatabaseManager::DatabaseManager() {
    conn = mysql_init(NULL);
}

bool DatabaseManager::connect() {

    conn = mysql_real_connect(
        conn,
        ConnectionCredentials().HOST.c_str(),
        ConnectionCredentials().USER.c_str(),
        ConnectionCredentials().PASSWORD.c_str(),
        ConnectionCredentials().DATABASE.c_str(),
        ConnectionCredentials().PORT,
        NULL,
        0
    );

    if (!conn) {
        std::cout << "Connection failed: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}

void DatabaseManager::close() {
    mysql_close(conn);
}