/**
 * Project Untitled
 */


#ifndef _SHOWRENTAL_H
#define _SHOWRENTAL_H

#include "ShowRentalUI.h"
#include "UserSession.h"
#include "Member.h"
#include "Bicycle.h"

class ShowRental 
{
private:
    ShowRentalUI showRentalUI;
    UserSession* userSession;

public: 
    
    /**
     * @param userSession
     * @param out_fp
     */
    ShowRental(UserSession* userSession, std::ofstream& out_fp);
    
    void execute();

};

#endif //_SHOWRENTAL_H