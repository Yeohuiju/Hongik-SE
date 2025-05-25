#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include "RentalList.h"

// 회원(Member) 클래스 정의
class Member : public User
{
private:
    std::string phoneNumber;        // 전화번호
    RentalList rentalList;          // 대여 정보 리스트

public:
    Member(std::string id, std::string pwd, std::string phoneNumber);       // 생성자
    std::string getPhoneNumber() const;     // phoneNumber(전화번호) 값 반환
    RentalList* getRentalList();            // rentalList(대여 정보 리스트) 반환
};

#endif //_MEMBER_H