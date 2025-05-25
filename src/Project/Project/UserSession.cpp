#include "UserSession.h"

/*
    함수 이름 : UserSession::UserSession() 
    기능      : UserSession 객체 생성
    전달 인자 : 없음
    반환값    : 없음
*/
UserSession::UserSession() : currentUser(nullptr), adminFlag(false) { }

/*
    함수 이름 : UserSession::login()
    기능      : 전달 받은 사용자로 로그인
    전달 인자 : user -> 로그인할 사용자
    반환값    : 없음
*/
void UserSession::login(User* user) 
{
    currentUser = user;                     // 입력 받은 사용자로 현재 사용자 설정
    adminFlag = user->getId() == "admin";   // 관리자 여부
}

/*
    함수 이름 : UserSession::logout() 
    기능      : 로그아웃
    전달 인자 : 없음
    반환값    : 없음
*/
void UserSession::logout() 
{
    currentUser = nullptr;      // 현재 사용자 제거
    adminFlag = false;          // 관리자 아님
}

/*
    함수 이름 : UserSession::getCurrentUser()
    기능      : 현재 로그인한 User 참조 반환
    전달 인자 : 없음
    반환값    : User* -> 현재 로그인한 User 참조
*/
User* UserSession::getCurrentUser() const
{
    return currentUser;
}

/*
    함수 이름 : UserSession::isAdmin()
    기능      : 현재 로그인한 사용자의 관리자 여부 반환
    전달 인자 : 없음
    반환값    : bool -> 현재 로그인한 사용자의 관리자 여부
*/
bool UserSession::isAdmin() const 
{
    return adminFlag;
}