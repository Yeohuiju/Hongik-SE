#ifndef _LOGIN_H
#define _LOGIN_H

#include "UserRepository.h"
#include "UserSession.h"
#include "LoginUI.h"

// �α��� ����� ���� Login control Ŭ���� ����
class Login
{
private:
    LoginUI loginUI;                    // boundary Ŭ����
    UserRepository* userRepository;     // ��ü User�� �����ϴ� UserRepository ��ü ����
    UserSession* userSession;           // ���� �α����� User ������ ������ �ִ� UserSession ��ü ����

public:
    Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp);   // ������
    LoginUI* getLoginUI();          // boundary Ŭ���� ��ȯ
    std::string login(std::string id, std::string pwd);     // �α���
    void execute();     // �α��� ��� ����
};

#endif //_LOGIN_H