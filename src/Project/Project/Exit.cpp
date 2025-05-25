/**
 * Project Untitled
 */


#include "Exit.h"

/**
 * Exit implementation
 */


/**
 * @param out_fp
 */
Exit::Exit(UserSession* userSession, UserRepository* userRepository, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : exitUI(out_fp), userSession(userSession), userRepository(userRepository), bicycleRepository(bicycleRepository), in_fp(in_fp), out_fp(out_fp) { }

void Exit::execute() {
	exitUI.startInterface();

	in_fp.close();
	out_fp.close();

	delete userSession;
	delete userRepository;
	delete bicycleRepository;
}