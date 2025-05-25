#ifndef _LOGIN_H
#define _LOGIN_H

#include "UserRepository.h"
#include "UserSession.h"
#include "LoginUI.h"

// 로그인 기능을 위한 Login control 클래스 정의
class Login
{
private:
    LoginUI loginUI;                    // boundary 클래스
    UserRepository* userRepository;     // 전체 User를 관리하는 UserRepository 객체 참조
    UserSession* userSession;           // 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조

public:
    Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp);   // 생성자
    LoginUI* getLoginUI();          // boundary 클래스 반환
    std::string login(std::string id, std::string pwd);     // 로그인
    void execute();     // 로그인 기능 수행
};

#endif //_LOGIN_H