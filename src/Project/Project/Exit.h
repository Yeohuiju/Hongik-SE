/**
 * Project Untitled
 */


#ifndef _EXIT_H
#define _EXIT_H

#include <fstream>
#include "ExitUI.h"
#include "UserSession.h"
#include "UserRepository.h"
#include "BicycleRepository.h"

class Exit 
{
private:
    ExitUI exitUI;
    UserSession* userSession;
    UserRepository* userRepository;
    BicycleRepository* bicycleRepository;
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param out_fp
     */
    Exit(UserSession* userSession, UserRepository* userRepository, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);
    
    void execute();

};

#endif //_EXIT_H