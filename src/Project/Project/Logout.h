/**
 * Project Untitled
 */


#ifndef _LOGOUT_H
#define _LOGOUT_H

#include "UserSession.h"
#include "LogoutUI.h"

class Logout
{
private:
    LogoutUI logoutUI;
    UserSession* userSession;

public:

    /**
     * @param userSession
     * @param out_fp
     */
    Logout(UserSession* userSession, std::ofstream& out_fp);

    void execute();

};

#endif //_LOGOUT_H