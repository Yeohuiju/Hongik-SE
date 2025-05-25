/**
 * Project Untitled
 */


#include "LogoutUI.h"

/**
 * LogoutUI implementation
 */


/**
 * @param out_fp
 */
LogoutUI::LogoutUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/**
 * @param id
 */
void LogoutUI::startInterface(std::string id) 
{
	out_fp << "2.2. ·Î±×¾Æ¿ô" << std::endl;
	out_fp << "> " << id << std::endl << std::endl;
}