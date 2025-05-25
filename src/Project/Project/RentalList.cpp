#include "RentalList.h"
#include "Bicycle.h"

/*
    함수 이름 : RentalList::addRental()
    기능      : 새로운 Rental 객체의 포인터를 rentalList 벡터에 추가 및 정렬
    전달 인자 : rental -> 추가할 Rental 객체 포인터
    반환값    : 없음
*/
void RentalList::addRental(Rental* rental) 
{
    rentalList.push_back(rental);       // rentalList 벡터에 추가
    sort(rentalList.begin(), rentalList.end(), &compare);       //  Rental 객체의 Bicycle 객체의 id 값을 기준으로 정렬
}

/*
    함수 이름 : RentalList::getRentalList()
    기능      : Rental 객체 포인터 벡터 반환
    전달 인자 : 없음
    반환값    : vector<Rental*> -> rentalList(Rental 포인터 벡터)
*/
std::vector<Rental*> RentalList::getRentalList() const
{
    return rentalList;
}

/*
    함수 이름 : RentalList::compare()
    기능      : 정렬을 위한 비교함수로 Rental 객체의 Bicycle 객체의 id 값을 기준으로 정렬
    전달 인자 : a -> 비교할 첫 번째 Rental 객체 참조, b -> 비교할 두 번째 Rental 객체 참조
    반환값   : bool -> true: a가 더 작음, false : b가 더 작음
*/
bool RentalList::compare(Rental* a, Rental* b)
{
    return (a->getBicycle())->getId() < (b->getBicycle())->getId();
}