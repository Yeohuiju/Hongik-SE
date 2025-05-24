/**
 * Project Untitled
 */


#ifndef _LOGOUT_H
#define _LOGOUT_H

class Logout {
public: 
    
/**
 * @param userSession
 */
void Logout(UserSession* userSession);
    
void execute();
private: 
    LogoutUI logoutUI;
    UserSession* userSession;
};

#endif //_LOGOUT_H