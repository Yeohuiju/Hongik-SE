/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include "RentalList.h"


class Member: public User 
{
private: 
    std::string phoneNumber;
    RentalList rentalList;

public: 
    
    /**
     * @param id
     * @param pwd
     * @param phoneNumber
     */
    Member(std::string id, std::string pwd, std::string phoneNumber);
    std::string getPhoneNumber() const;
    RentalList* getRentalList();
};

#endif //_MEMBER_H