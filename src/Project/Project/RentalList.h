#ifndef _RENTALLIST_H
#define _RENTALLIST_H

#include <vector>
#include <algorithm>
#include "Rental.h"

// 특정 회원의 Rental 객체를 관리하는 RentalList 클래스 정의
class RentalList 
{
private: 
    std::vector<Rental*> rentalList;            // Rental 객체 벡터
    static bool compare(Rental* a, Rental* b);  // 정렬을 위한 비교 함수

public: 
    void addRental(Rental* rental);                 // 새로운 Rental 객체를 벡터에 추가
    std::vector<Rental*> getRentalList() const;     // 대여 정보(Rental) 벡터 반환
};

#endif //_RENTALLIST_H