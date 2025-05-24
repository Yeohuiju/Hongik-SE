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
 * @param in_fp
 * @param out_fp
 */
void Login(UserRepository* userRepository, UserSession* userSession, ifstream in_fp, ofstream& out_fp);
    
/**
 * @param id
 * @param pwd
 */
string login(string id, string pwd);
    
void execute();
private: 
    LoginUI loginUI;
    UserRepository* userRepository;
    UserSession* userSession;
};

#endif //_LOGIN_H