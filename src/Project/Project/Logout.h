#ifndef _LOGOUT_H
#define _LOGOUT_H

#include "UserSession.h"
#include "LogoutUI.h"

// 로그아웃 기능을 위한 Logout control 클래스 정의
class Logout
{
private:
    LogoutUI logoutUI;          // boundary 클래스
    UserSession* userSession;   // 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조

public:
    Logout(UserSession* userSession, std::ofstream& out_fp);        // 생성자
    void execute();     // 로그아웃 기능 수행
};

#endif //_LOGOUT_H