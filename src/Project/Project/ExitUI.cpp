/**
 * Project Untitled
 */


#include "ExitUI.h"

/**
 * ExitUI implementation
 */


/**
 * @param out_fp
 */
ExitUI::ExitUI(std::ofstream& out_fp) : out_fp(out_fp) { }

void ExitUI::startInterface() 
{
	out_fp << "6.1. Á¾·á";
}