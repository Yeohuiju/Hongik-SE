#ifndef _LOGOUT_H
#define _LOGOUT_H

#include "UserSession.h"
#include "LogoutUI.h"

// �α׾ƿ� ����� ���� Logout control Ŭ���� ����
class Logout
{
private:
    LogoutUI logoutUI;          // boundary Ŭ����
    UserSession* userSession;   // ���� �α����� User ������ ������ �ִ� UserSession ��ü ����

public:
    Logout(UserSession* userSession, std::ofstream& out_fp);        // ������
    void execute();     // �α׾ƿ� ��� ����
};

#endif //_LOGOUT_H