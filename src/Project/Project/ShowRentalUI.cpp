/**
 * Project Untitled
 */


#include "ShowRentalUI.h"

/**
 * ShowRentalUI implementation
 */


/**
 * @param out_fp
 */
ShowRentalUI::ShowRentalUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/**
 * @param info
 */
void ShowRentalUI::startInterface(std::string info) 
{
	out_fp << "5.1. 자전거 대여 리스트" << std::endl;
	out_fp << info << std::endl;
}