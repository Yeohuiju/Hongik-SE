#ifndef _USERSESSION_H
#define _USERSESSION_H

#include "User.h"

// 현재 로그인한 User 정보를 가지고 있는 UserSession 클래스 정의
class UserSession 
{
private: 
    User* currentUser;      // 현재 로그인한 User 객체
    bool adminFlag;         // 관리자 여부

public: 
    UserSession();                  // 생성자
    void login(User* user);         // 로그인
    void logout();                  // 로그아웃
    User* getCurrentUser() const;   // 현재 사용자 반환
    bool isAdmin() const;           // 관리자 여부 반환
};

#endif //_USERSESSION_H