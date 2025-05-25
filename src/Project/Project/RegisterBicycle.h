/**
 * Project Untitled
 */


#ifndef _REGISTERBICYCLE_H
#define _REGISTERBICYCLE_H

#include "UserSession.h"
#include "BicycleRepository.h"
#include "RegisterBicycleUI.h"

class RegisterBicycle 
{
private:
    RegisterBicycleUI registerBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;

public: 
    
    /**
     * @param userSesseion
     * @param bicycleRepository
     * @param in_fp
     * @param out_fp
     */
    RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);
    RegisterBicycleUI* getRegisterBicycleUI();
    
    /**
     * @param id
     * @param name
     */
    std::string registerBicycle(std::string id, std::string name);
    
    void execute();
};

#endif //_REGISTERBICYCLE_H