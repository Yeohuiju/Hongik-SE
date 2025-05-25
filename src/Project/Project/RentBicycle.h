/**
 * Project Untitled
 */


#ifndef _RENTBICYCLE_H
#define _RENTBICYCLE_H

#include "RentBicycleUI.h"
#include "UserSession.h"
#include "BicycleRepository.h"
#include "Member.h"
#include "Rental.h"

class RentBicycle 
{
private:
    RentBicycleUI rentBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;

public: 
    
/**
 * @param userSession
 * @param bicycleRepository
 * @param in_fp
 * @param out_fp
 */
RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);
RentBicycleUI* getRentBicycleUI();
    
/**
 * @param id
 */
std::string rentBicycle(std::string id);
    
void execute();
};

#endif //_RENTBICYCLE_H