/**
 * Project Untitled
 */


#include "Logout.h"

/**
 * Logout implementation
 */


/**
 * @param userSession
 * @param out_fp
 */
void Logout::Logout(UserSession* userSession, ofstream& out_fp) : userSession(userSession), logoutUI(out_fp) { }

void Logout::execute() 
{
	std::string userId = (userSession->getCurrentUser())->getId();
	logoutUI->startInterface(userId);
}