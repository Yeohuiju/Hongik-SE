/**
 * Project Untitled
 */


#ifndef _RENTALLIST_H
#define _RENTALLIST_H

#include <vector>
#include "Rental.h"

class RentalList 
{
private: 
    std::vector<Rental*> rentalList;
    bool compare(Rental* a, Rental* b);

public: 
    
    /**
     * @param rental
     */
    void addRental(Rental* rental);
    std::vector<Rental*> getRentalList() const;
};

#endif //_RENTALLIST_H