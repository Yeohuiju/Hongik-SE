/**
 * Project Untitled
 */


#include "UserRepository.h"

/**
 * UserRepository implementation
 */


/**
 * @param user
 */
void UserRepository::save(User* user) 
{
    userList.push_back(user);
    std::sort(userList.begin(), userList.end(), compare);
}

/**
 * @param id
 * @return User*
 */
User* UserRepository::findById(std::string id) const
{
    for (User* user : userList) 
    {
        if (user->getId() == id) 
        {
            return user;
        }
    }

    return nullptr;
}

bool UserRepository::compare(User* a, User* b)
{
    return a->getId() < b->getId();
}