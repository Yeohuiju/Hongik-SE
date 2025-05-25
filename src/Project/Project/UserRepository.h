#ifndef _USERREPOSITORY_H
#define _USERREPOSITORY_H

#include <vector>
#include <algorithm>
#include "User.h"

// ��ü User ��ü�� �����ϴ� UserRepository Ŭ���� ����
class UserRepository 
{
private: 
    std::vector<User*> userList;            // User ��ü ����
    static bool compare(User* a, User* b);  // ������ ���� �� �Լ�

public: 
    void save(User* user);                  // ���ο� User ��ü�� ���Ϳ� �߰�
    User* findById(std::string id) const;   // ���޹��� id�� id�� ������ User ��ü ��ȯ
};

#endif //_USERREPOSITORY_H