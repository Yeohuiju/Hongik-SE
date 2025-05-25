/**
 * Project Untitled
 */


#ifndef _LOGIN_H
#define _LOGIN_H

#include "UserRepository.h"
#include "UserSession.h"
#include "LoginUI.h"

class Login 
{
private:
    LoginUI loginUI;
    UserRepository* userRepository;
    UserSession* userSession;

public: 
    
    /**
     * @param userRepository
     * @param userSession
     * @param in_fp
     * @param out_fp
     */
    Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp);
    LoginUI* getLoginUI();
    
    /**
     * @param id
     * @param pwd
     */
    std::string login(std::string id, std::string pwd);
    
    void execute();
};

#endif //_LOGIN_H