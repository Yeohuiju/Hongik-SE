#ifndef _REGISTERUSER_H
#define _REGISTERUSER_H

#include "RegisterUserUI.h"
#include "UserRepository.h"
#include "Member.h"

// ȸ������ ����� ���� RegisterUser control Ŭ���� ����
class RegisterUser 
{
private: 
    RegisterUserUI registerUserUI;      // boundary Ŭ����
    UserRepository* userRepository;     // ��ü User�� �����ϴ� UserRepository ��ü ����

public: 
    RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp);      // ������
    RegisterUserUI* getRegisterUserUI();        // boundary Ŭ���� ��ȯ
    std::string registerUser(std::string id, std::string pwd, std::string phoneNumber);     // ȸ������
    void execute();     // ȸ������ ��� ����
};

#endif //_REGISTERUSER_H