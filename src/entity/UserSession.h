/**
 * Project Untitled
 */


#ifndef _USERSESSION_H
#define _USERSESSION_H

#include "User.h"

class UserSession 
{
private: 
    User* currentUser;
    bool adminFlag;

public: 
    UserSession();
    
    /**
     * @param user
     */
    void login(User* user);
        
    void logout();
    User* getCurrentUser() const;
    bool isAdmin() const;

};

#endif //_USERSESSION_H