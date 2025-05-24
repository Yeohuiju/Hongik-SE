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
 * @param in_fp
 * @param out_fp
 */
void RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, ifstream& in_fp, ofstream& out_fp);
    
/**
 * @param id
 */
string rentBicycle(string id);
    
void execute();
private: 
    RentBicycleUI rentBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;
};

#endif //_RENTBICYCLE_H