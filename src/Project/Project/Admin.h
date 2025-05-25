#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"

// 관리자(Admin) 클래스 정의
class Admin : public User
{
public:
    Admin(std::string id, std::string pwd);     // 생성자
};

#endif //_ADMIN_H