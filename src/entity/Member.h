/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"


class Member: public User {
private: 
    String phoneNumber;
    RentalList rentalList;
};

#endif //_MEMBER_H