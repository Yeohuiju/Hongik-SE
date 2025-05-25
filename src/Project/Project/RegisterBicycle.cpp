/**
 * Project Untitled
 */


#include "RegisterBicycle.h"

/**
 * RegisterBicycle implementation
 */


/**
 * @param userSesseion
 * @param bicycleRepository
 * @param in_fp
 * @param out_fp
 */
RegisterBicycle::RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), registerBicycleUI(in_fp, out_fp) { }

RegisterBicycleUI* RegisterBicycle::getRegisterBicycleUI()
{
    return &registerBicycleUI;
}

/**
 * @param id
 * @param name
 * @return string
 */
std::string RegisterBicycle::registerBicycle(std::string id, std::string name) {
    Bicycle* bicycle = new Bicycle(id, name);
    bicycleRepository->save(bicycle);

    return "> " + bicycle->getInfo() + "\n";
}

void RegisterBicycle::execute() {
    if (userSession->isAdmin())
    {
        registerBicycleUI.startInterface();
    }
}