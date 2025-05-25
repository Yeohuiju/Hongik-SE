/**
 * Project Untitled
 */


#include "LoginUI.h"
#include "Login.h"

/**
 * LoginUI implementation
 */


/**
 * @param in_fp
 * @param out_fp
 */
LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

void LoginUI::startInterface()
{
	out_fp << "2.1. ·Î±×ÀÎ" << std::endl;
}

/**
 * @param control
 */
void LoginUI::inputInfo(Login* control) 
{
	std::string id;
	std::string pwd;

	in_fp >> id >> pwd;
	out_fp << control->login(id, pwd) << std::endl;
}