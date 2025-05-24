/**
 * Project Untitled
 */


#ifndef _LOGIN_H
#define _LOGIN_H

class Login {
public: 
    
/**
 * @param userRepository
 * @param userSession
 */
void Login(UserRepository* userRepository, UserSession* userSession);
    
/**
 * @param id
 * @param pwd
 */
String login(String id, String pwd);
    
void execute();
private: 
    LoginUI loginUI;
    UserRepository* userRepository;
    UserSession* userSession;
};

#endif //_LOGIN_H