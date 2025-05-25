#ifndef _USER_H
#define _USER_H

#include <string>

// 회원과 관리자를 포괄하는 사용자(User) 클래스 정의
class User
{
protected:
	std::string id;		// 사용자 ID
	std::string pwd;	// 사용자 비밀번호

public:
	User(std::string id, std::string pwd);		// 생성자
	std::string getId() const;					// id(사용자 ID) 값 반환
	std::string getPwd() const;					// pwd(사용자 비밀번호) 값 반환
};

#endif // _USER_H
