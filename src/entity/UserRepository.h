/**
 * Project Untitled
 */


#ifndef _USERREPOSITORY_H
#define _USERREPOSITORY_H

#include <vector>
#include "User.h"

class UserRepository 
{
private: 
    std::vector<User*> userList;
    bool compare(User* a, User* b);

public: 
    
    /**
     * @param user
     */
    void save(User* user);
        
    /**
     * @param id
     */
    User* findById(std::string id) const;
};

#endif //_USERREPOSITORY_H