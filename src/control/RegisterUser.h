/**
 * Project Untitled
 */


#ifndef _REGISTERUSER_H
#define _REGISTERUSER_H

class RegisterUser {
public: 
    
/**
 * @param userRepository
 */
void RegisterUser(UserRepository* userRepository);
    
/**
 * @param id
 * @param pwd
 * @param phoneNumber
 */
String registerUser(String id, String pwd, String phoneNumber);
    
void execute();
private: 
    RegisterUserUI registerUserUI;
    UserRepository* userRepository;
};

#endif //_REGISTERUSER_H