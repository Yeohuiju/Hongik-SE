#ifndef _SHOWRENTAL_H
#define _SHOWRENTAL_H

#include "ShowRentalUI.h"
#include "UserSession.h"
#include "Member.h"
#include "Bicycle.h"

// 자전거 대여 정보 조회 기능을 위한 ShowRental control 클래스 정의
class ShowRental 
{
private:
    ShowRentalUI showRentalUI;      // boundary 클래스
    UserSession* userSession;       // 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조

public: 
    ShowRental(UserSession* userSession, std::ofstream& out_fp);        // 생성자
    void execute();     // 자전거 대여 정보 조회 기능 수행
};

#endif //_SHOWRENTAL_H