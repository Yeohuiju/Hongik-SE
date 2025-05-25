/**
 * Project Untitled
 */


#ifndef _USERREPOSITORY_H
#define _USERREPOSITORY_H

#include <vector>
#include <algorithm>
#include "User.h"

class UserRepository 
{
private: 
    std::vector<User*> userList;
    static bool compare(User* a, User* b);

public: 
    
    /**
     * @param user
     */
    void save(User* user);
        
    /**
     * @param id
     */
    User* findById(std::string id) const;
    ~UserRepository();
};

#endif //_USERREPOSITORY_H