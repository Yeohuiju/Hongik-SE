#ifndef _BICYCLEREPOSITORY_H
#define _BICYCLEREPOSITORY_H

#include <vector>
#include <algorithm>
#include "Bicycle.h"

// 전체 Bicycle 객체를 관리하는 BicycleRepository 클래스 정의
class BicycleRepository
{
private:
    std::vector<Bicycle*> bicycleList;              // Biclcye 객체 벡터
    static bool compare(Bicycle* a, Bicycle* b);    // 정렬을 위한 비교 함수

public:
    void save(Bicycle* bicycle);                // 새로운 Bicycle 객체를 벡터에 추가
    Bicycle* findById(std::string id) const;    // 전달받은 id를 id로 가지는 Bicycle 객체 반환
};

#endif //_BICYCLEREPOSITORY_H