#include "User.h"

/*
    함수 이름 : User::User()
    기능      : User 객체 생성
    전달 인자 : id -> 사용자 ID, pwd -> 사용자 비밀번호
    반환값    : 없음
*/
User::User(std::string id, std::string pwd) : id(id), pwd(pwd) { }

/*
    함수 이름 :  User::getId()
    기능      : ID(id) 값 반환
    전달 인자 : 없음
    반환값    : string -> id
*/
std::string User::getId() const
{
    return id;
}

/*
    함수 이름 : User::getPwd()
    기능      : 비밀번호(pwd) 값 반환
    전달 인자 : 없음
    반환값    : string -> 비밀번호
*/
std::string User::getPwd() const
{
    return pwd;
}