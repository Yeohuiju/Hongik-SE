/**
 * Project Untitled
 */


#include "RentalList.h"
#include "Bicycle.h"

/**
 * RentalList implementation
 */


/**
 * @param rental
 */
void RentalList::addRental(Rental* rental) 
{
    rentalList.push_back(rental);
    sort(rentalList.begin(), rentalList.end(), &compare);
}

std::vector<Rental*> RentalList::getRentalList() const
{
    return rentalList;
}

bool RentalList::compare(Rental* a, Rental* b)
{
    return (a->getBicycle())->getId() < (b->getBicycle())->getId();
}