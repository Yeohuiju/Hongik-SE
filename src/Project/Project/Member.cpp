#include "Member.h"

/*
    함수 이름 : Member::Member()
    기능     : Member 객체 생성
    전달 인자 : id -> 사용자 ID, pwd -> 사용자 비밀번호, phoneNumber -> 전화번호
    반환값   : 없음
*/
Member::Member(std::string id, std::string pwd, std::string phoneNumber) : User(id, pwd), phoneNumber(phoneNumber) { }

/*
    함수 이름 : Member::getPhoneNumber()
    기능     : 전화번호(phoneNumber) 값 반환
    전달 인자 : 없음
    반환값   : string -> 전화번호
*/
std::string Member::getPhoneNumber() const
{
    return phoneNumber;
}

/*
    함수 이름 : Member::getRentalList()
    기능     : 대여 정보 리스트(rentalList) 객체 참조 반환
    전달 인자 : 없음
    반환값   : RentalList* -> 대여 정보 리스트(rentalList) 객체 참조
*/
RentalList* Member::getRentalList()
{
    return &rentalList;
}