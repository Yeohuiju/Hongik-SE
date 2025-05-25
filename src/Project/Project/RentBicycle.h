#ifndef _RENTBICYCLE_H
#define _RENTBICYCLE_H

#include "RentBicycleUI.h"
#include "UserSession.h"
#include "BicycleRepository.h"
#include "Member.h"
#include "Rental.h"

// ������ �뿩 ����� ���� RentBicycle control Ŭ���� ����
class RentBicycle 
{
private:
    RentBicycleUI rentBicycleUI;            // boundary Ŭ����
    UserSession* userSession;               // ���� �α����� User ������ ������ �ִ� UserSession ��ü ����
    BicycleRepository* bicycleRepository;   // ��ü Bicycle�� �����ϴ� BicycleRepository ��ü ����

public: 
    RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);       // ������
    RentBicycleUI* getRentBicycleUI();          // boundary Ŭ���� ��ȯ
    std::string rentBicycle(std::string id);    // ������ �뿩
    void execute();                             // ������ �뿩 ��� ����
};

#endif //_RENTBICYCLE_H