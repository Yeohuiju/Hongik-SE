/**
 * Project Untitled
 */


#ifndef _RENTALLIST_H
#define _RENTALLIST_H

class RentalList {
public: 
    
/**
 * @param rental
 */
void addRental(Rental* rental);
private: 
    vector<Rental> rentalList;
};

#endif //_RENTALLIST_H