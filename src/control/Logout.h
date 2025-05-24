/**
 * Project Untitled
 */


#ifndef _LOGOUT_H
#define _LOGOUT_H

class Logout {
public: 
    
/**
 * @param userSession
 * @param out_fp
 */
void Logout(UserSession* userSession, ofstream& out_fp);
    
void execute();
private: 
    LogoutUI logoutUI;
    UserSession* userSession;
};

#endif //_LOGOUT_H