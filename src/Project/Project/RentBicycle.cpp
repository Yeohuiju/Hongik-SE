/**
 * Project Untitled
 */


#include "RentBicycle.h"

/**
 * RentBicycle implementation
 */


/**
 * @param userSession
 * @param bicycleRepository
 * @param in_fp
 * @param out_fp
 */
RentBicycle::RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), rentBicycleUI(in_fp, out_fp) { }

RentBicycleUI* RentBicycle::getRentBicycleUI()
{
    return &rentBicycleUI;
}

/**
 * @param id
 * @return string
 */
std::string RentBicycle::rentBicycle(std::string id) {
    Bicycle* bicycle = bicycleRepository->findById(id);
    bicycle->setAvailable(false);

    Member* member = (Member*)(userSession->getCurrentUser());

    Rental* rental = new Rental(member, bicycle);
    (member->getRentalList())->addRental(rental);

    return "> " + bicycle->getInfo() + "\n";
}

void RentBicycle::execute() {
    if (!userSession->isAdmin())
    {
        rentBicycleUI.startInterface();
    }
}