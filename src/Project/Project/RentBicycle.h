#ifndef _RENTBICYCLE_H
#define _RENTBICYCLE_H

#include "RentBicycleUI.h"
#include "UserSession.h"
#include "BicycleRepository.h"
#include "Member.h"
#include "Rental.h"

// 자전거 대여 기능을 위한 RentBicycle control 클래스 정의
class RentBicycle 
{
private:
    RentBicycleUI rentBicycleUI;            // boundary 클래스
    UserSession* userSession;               // 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조
    BicycleRepository* bicycleRepository;   // 전체 Bicycle을 관리하는 BicycleRepository 객체 참조

public: 
    RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);       // 생성자
    RentBicycleUI* getRentBicycleUI();          // boundary 클래스 반환
    std::string rentBicycle(std::string id);    // 자전거 대여
    void execute();                             // 자전거 대여 기능 수행
};

#endif //_RENTBICYCLE_H