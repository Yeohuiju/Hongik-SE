#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"

// ������(Admin) Ŭ���� ����
class Admin : public User
{
public:
    Admin(std::string id, std::string pwd);     // ������
};

#endif //_ADMIN_H