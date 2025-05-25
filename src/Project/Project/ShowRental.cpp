/**
 * Project Untitled
 */


#include "ShowRental.h"

/**
 * ShowRental implementation
 */


/**
 * @param userSession
 * @param out_fp
 */
ShowRental::ShowRental(UserSession* userSession, std::ofstream& out_fp) : userSession(userSession), showRentalUI(out_fp) { }

void ShowRental::execute() 
{
	if (!userSession->isAdmin())
	{
		Member* member = (Member*)userSession->getCurrentUser();
		RentalList* rentalList = member->getRentalList();

		std::string rentalInfo = "";

		for (Rental* rental : rentalList->getRentalList())
		{
			Bicycle* bicycle = rental->getBicycle();
			rentalInfo += "> " + bicycle->getInfo() + "\n";
		}

		showRentalUI.startInterface(rentalInfo);
	}
}