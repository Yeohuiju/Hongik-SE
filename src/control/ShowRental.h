/**
 * Project Untitled
 */


#ifndef _SHOWRENTAL_H
#define _SHOWRENTAL_H

class ShowRental {
public: 
    
/**
 * @param userSession
 */
void ShowRental(UserSession* userSession);
    
void execute();
private: 
    ShowRentalUI showRentalUI;
    UserSession* userSession;
};

#endif //_SHOWRENTAL_H