/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include <string>

class User 
{
protected: 
    std::string id;     // 사용자 ID
    std::string pwd;    // 사용자 비밀번호

public: 
    
    /**
     * @param id
     * @param pwd
     */
    User(std::string id, std::string pwd);
    std::string getId() const;
    std::string getPwd() const;
};

#endif //_USER_H