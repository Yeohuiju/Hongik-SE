#ifndef _REGISTERUSER_H
#define _REGISTERUSER_H

#include "RegisterUserUI.h"
#include "UserRepository.h"
#include "Member.h"

// 회원가입 기능을 위한 RegisterUser control 클래스 정의
class RegisterUser 
{
private: 
    RegisterUserUI registerUserUI;      // boundary 클래스
    UserRepository* userRepository;     // 전체 User를 관리하는 UserRepository 객체 참조

public: 
    RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp);      // 생성자
    RegisterUserUI* getRegisterUserUI();        // boundary 클래스 반환
    std::string registerUser(std::string id, std::string pwd, std::string phoneNumber);     // 회원가입
    void execute();     // 회원가입 기능 수행
};

#endif //_REGISTERUSER_H