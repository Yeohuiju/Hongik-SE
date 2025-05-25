#ifndef _RENTAL_H
#define _RENTAL_H

// 순환 참조 방지를 위한 클래스 전방 선언
class Member;
class Bicycle;

// 자전거 대여 정보(Rental) 클래스 정의
class Rental 
{
private: 
    Member* member;     // 대여한 회원
    Bicycle* bicycle;   // 대여한 자전거

public: 
    Rental(Member* member, Bicycle* bicycle);       // 생성자
    Bicycle* getBicycle() const;                    // bicycle(대여한 자전거) 반환
};

#endif //_RENTAL_H