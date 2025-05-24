/**
 * Project Untitled
 */


#ifndef _REGISTERUSER_H
#define _REGISTERUSER_H

#include "../boundary/RegisterUserUI.h"
#include "../entity/UserRepository.h"
#include "../entity/Member.h"

class RegisterUser 
{
private: 
    RegisterUserUI registerUserUI;
    UserRepository* userRepository;

public: 
    
    /**
     * @param userRepository
     * @param in_fp
     * @param out_fp
     */
    RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp);
    RegisterUserUI* getRegisterUserUI();
        
    /**
     * @param id
     * @param pwd
     * @param phoneNumber
     */
    std::string registerUser(std::string id, std::string pwd, std::string phoneNumber);
    void execute();

};

#endif //_REGISTERUSER_H