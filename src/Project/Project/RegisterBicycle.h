#ifndef _REGISTERBICYCLE_H
#define _REGISTERBICYCLE_H

#include "UserSession.h"
#include "BicycleRepository.h"
#include "RegisterBicycleUI.h"

// 자전거 등록 기능을 위한 control 클래스 정의
class RegisterBicycle 
{
private:
    RegisterBicycleUI registerBicycleUI;        // boundary 클래스
    UserSession* userSession;                   // 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조
    BicycleRepository* bicycleRepository;       // 전체 Bicycle을 관리하는 BicycleRepository 객체 참조

public: 
    RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp);       // 생성자
    RegisterBicycleUI* getRegisterBicycleUI();      // boundary 클래스 반환
    std::string registerBicycle(std::string id, std::string name);      // 자전거 등록
    void execute();     // 자전거 등록 기능 수행
};

#endif //_REGISTERBICYCLE_H