/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"


class Admin: public User 
{
public: 
    
    /**
     * @param id
     * @param pwd
     */
    Admin(std::string id, std::string pwd);
};

#endif //_ADMIN_H