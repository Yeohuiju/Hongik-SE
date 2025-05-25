#ifndef _USERSESSION_H
#define _USERSESSION_H

#include "User.h"

// ���� �α����� User ������ ������ �ִ� UserSession Ŭ���� ����
class UserSession 
{
private: 
    User* currentUser;      // ���� �α����� User ��ü
    bool adminFlag;         // ������ ����

public: 
    UserSession();                  // ������
    void login(User* user);         // �α���
    void logout();                  // �α׾ƿ�
    User* getCurrentUser() const;   // ���� ����� ��ȯ
    bool isAdmin() const;           // ������ ���� ��ȯ
};

#endif //_USERSESSION_H