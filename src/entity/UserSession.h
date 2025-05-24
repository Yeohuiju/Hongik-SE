/**
 * Project Untitled
 */


#ifndef _USERSESSION_H
#define _USERSESSION_H

class UserSession {
public: 
    
/**
 * @param user
 */
void login(User* user);
    
void logout();
private: 
    User* currentUser;
    Boolean isAdmin;
};

#endif //_USERSESSION_H