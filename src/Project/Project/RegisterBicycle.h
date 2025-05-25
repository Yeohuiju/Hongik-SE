#ifndef _REGISTERBICYCLE_H
#define _REGISTERBICYCLE_H

#include "UserSession.h"
#include "BicycleRepository.h"
#include "RegisterBicycleUI.h"

// ������ ��� ����� ���� control Ŭ���� ����
class RegisterBicycle 
{
private:
    RegisterBicycleUI registerBicycleUI;        // boundary Ŭ����
    UserSession* userSession;                   // ���� �α����� User ������ ������ �ִ� UserSession ��ü ����
    BicycleRepository* bicycleRepository;       // ��ü Bicycle�� �����ϴ� BicycleRepository ��ü ����

public: 
    RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);       // ������
    RegisterBicycleUI* getRegisterBicycleUI();      // boundary Ŭ���� ��ȯ
    std::string registerBicycle(std::string id, std::string name);      // ������ ���
    void execute();     // ������ ��� ��� ����
};

#endif //_REGISTERBICYCLE_H