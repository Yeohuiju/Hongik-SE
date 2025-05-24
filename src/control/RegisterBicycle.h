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
 */
void RegisterBicycle(UserSession* userSesseion, BicycleRepository* bicycleRepository);
    
/**
 * @param id
 * @param name
 */
String registerBicycle(String id, String name);
    
void execute();
private: 
    RegisterBicycleUI registerBicycleUI;
    UserSession* userSession;
    BicycleRepository* bicycleRepository;
};

#endif //_REGISTERBICYCLE_H