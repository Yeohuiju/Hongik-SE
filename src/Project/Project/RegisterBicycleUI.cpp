/**
 * Project Untitled
 */


#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"

/**
 * RegisterBicycleUI implementation
 */


/**
 * @param in_fp
 * @param out_fp
 */
RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

void RegisterBicycleUI::startInterface() 
{
	out_fp << "3.1. 자전거 등록" << std::endl;
}

/**
 * @param control
 */
void RegisterBicycleUI::inputInfo(RegisterBicycle* control) 
{
	std::string id;
	std::string name;

	in_fp >> id >> name;
	out_fp << control->registerBicycle(id, name) << std::endl;
}