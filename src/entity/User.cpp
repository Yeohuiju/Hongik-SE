/**
 * Project Untitled
 */


#include "User.h"

/**
 * User implementation
 */


/**
 * @param id
 * @param pwd
 */
User::User(std::string id, std::string pwd) : id(id), pwd(pwd) { }

std::string User::getId() const
{
    return id;
}

std::string User::getPwd() const
{
    return pwd;
}