/**
 * Project Untitled
 */


#ifndef _SHOWRENTAL_H
#define _SHOWRENTAL_H

class ShowRental {
public: 
    
/**
 * @param userSession
 * @param out_fp
 */
void ShowRental(UserSession* userSession, ofstream& out_fp);
    
void execute();
private: 
    ShowRentalUI showRentalUI;
    UserSession* userSession;
};

#endif //_SHOWRENTAL_H