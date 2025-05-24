/**
 * Project Untitled
 */


#ifndef _RENTAL_H
#define _RENTAL_H

#include "Member.h"
#include "Bicycle.h"

class Rental 
{
private: 
    Member* member;
    Bicycle* bicycle;

public: 
    
    /**
     * @param member
     * @param bicycle
     */
    Rental(Member* member, Bicycle* bicycle);
    Bicycle* getBicycle() const;

};

#endif //_RENTAL_H