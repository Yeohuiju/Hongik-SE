/**
 * Project Untitled
 */


#ifndef _REGISTERBICYCLE_H
#define _REGISTERBICYCLE_H

class RegisterBicycle {
public: 
    
/**
 * @param userSesseion
 * @param bicycleRepository
 * @param in_fp
 * @param out_fp
 */
void RegisterBicycle(UserSession* userSesseion, BicycleRepository* bicycleRepository, ifstream& in_fp, ofstream& out_fp);
    
/**
 * @param id
 * @param name
 */
string registerBicycle(string id, string name);
    
void execute();
private: 
    RegisterBicycleUI registerBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;
};

#endif //_REGISTERBICYCLE_H