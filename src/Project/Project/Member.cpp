/**
 * Project Untitled
 */


#include "Member.h"

/**
 * Member implementation
 */


/**
 * @param id
 * @param pwd
 * @param phoneNumber
 */
Member::Member(std::string id, std::string pwd, std::string phoneNumber) : User(id, pwd), phoneNumber(phoneNumber) { }

std::string Member::getPhoneNumber() const
{
    return phoneNumber;
}

RentalList* Member::getRentalList()
{
    return &rentalList;
}