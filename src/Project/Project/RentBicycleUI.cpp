/**
 * Project Untitled
 */


#include "RentBicycleUI.h"
#include "RentBicycle.h"

/**
 * RentBicycleUI implementation
 */


/**
 * @param in_fp
 * @param out_fp
 */
RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

void RentBicycleUI::startInterface() 
{
	out_fp << "4.1. 자전거 대여" << std::endl;
}

/**
 * @param control
 */
void RentBicycleUI::inputInfo(RentBicycle* control) 
{
	std::string id;
	in_fp >> id;

	out_fp << control->rentBicycle(id) << std::endl;
}