/**
 * Project Untitled
 */


#ifndef _REGISTERUSER_H
#define _REGISTERUSER_H

class RegisterUser {
public: 
    
/**
 * @param userRepository
 * @param in_fp
 * @param out_fp
 */
void RegisterUser(UserRepository* userRepository, ifstream in_fp, ofstream& out_fp);
    
/**
 * @param id
 * @param pwd
 * @param phoneNumber
 */
string registerUser(string id, string pwd, string phoneNumber);
    
void execute();
private: 
    RegisterUserUI registerUserUI;
    UserRepository* userRepository;
};

#endif //_REGISTERUSER_H