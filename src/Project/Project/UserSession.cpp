/**
 * Project Untitled
 */


#include "UserSession.h"

/**
 * UserSession implementation
 */

 UserSession::UserSession() : currentUser(nullptr), adminFlag(false) { }

/**
 * @param user
 */
void UserSession::login(User* user) 
{
    currentUser = user;
    adminFlag = user->getId() == "admin";
}

void UserSession::logout() 
{
    currentUser = nullptr;
    adminFlag = false;
}

User* UserSession::getCurrentUser() const
{
    return currentUser;
}

bool UserSession::isAdmin() const 
{
    return adminFlag;
}