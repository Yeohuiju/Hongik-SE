#include "Rental.h"

/*
    함수 이름 : Rental::Rental()
    기능      : Rental 객체 생성
    전달 인자 : member -> 대여한 회원 객체 참조, bicycle -> 대여한 자전거 객체 참조
    반환값    : 없음
*/
Rental::Rental(Member* member, Bicycle* bicycle) : member(member), bicycle(bicycle) { }

/*
    함수 이름 : Rental::getBicycle()
    기능      : 대여한 자전거(bicycle) 객체 참조 반환
    전달 인자 : 없음
    반환값    : Bicycle* -> 대여한 자전거(bicycle) 객체 참조
*/
Bicycle* Rental::getBicycle() const
{
    return bicycle;
}