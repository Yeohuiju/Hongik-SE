/**
 * Project Untitled
 */


#ifndef _RENTBICYCLE_H
#define _RENTBICYCLE_H

class RentBicycle {
public: 
    
/**
 * @param userSession
 * @param bicycleRepository
 */
void RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository);
    
/**
 * @param id
 */
String rentBicycle(String id);
    
void execute();
private: 
    RentBicycleUI rentBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;
};

#endif //_RENTBICYCLE_H