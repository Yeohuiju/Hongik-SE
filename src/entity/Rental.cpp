/**
 * Project Untitled
 */


#include "Rental.h"

/**
 * Rental implementation
 */


/**
 * @param member
 * @param bicycle
 */
Rental::Rental(Member* member, Bicycle* bicycle) : member(member), bicycle(bicycle) { }

Bicycle* Rental::getBicycle() const
{
    return bicycle;
}