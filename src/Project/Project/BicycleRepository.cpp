#include "BicycleRepository.h"

/*
    함수 이름 : BicycleRepository::save()
    기능     : 새로운 Bicycle 객체의 포인터를 bicycleList 벡터에 추가 및 정렬
    전달 인자 : bicycle -> 추가할 Bicycle 객체 포인터
    반환값   : 없음
*/
void BicycleRepository::save(Bicycle* bicycle)
{
    bicycleList.push_back(bicycle);     // bicycleList 벡터에 추가
    sort(bicycleList.begin(), bicycleList.end(), &compare);     // Bicycle 객체의 id 값을 기준으로 정렬
}

/*
    함수 이름 : BicycleRepository::findById()
    기능     : 특정 id의 Bicycle 객체를 찾아 해당 객체 포인터 반환
    전달 인자 : id -> 찾고자 하는 Bicycle 객체의 id
    반환값   : Bicycle* -> 전달 받은 id의 Bicycle 객체 포인터
*/
Bicycle* BicycleRepository::findById(std::string id) const
{

    /*
    동일한 id를 가진 Bicycle 객체를 찾을 때까지 전체 Bicycle 객체에 대해 반복
    */
    for (Bicycle* bicycle : bicycleList)
    {
        if (bicycle->getId() == id)     // 동일한 id의 Bicycle
        {
            return bicycle;
        }
    }

    return nullptr;
}

/*
    함수 이름 : BicycleRepository::compare()
    기능     : 정렬을 위한 비교함수로 Bicycle 객체의 id 값을 기준으로 정렬
    전달 인자 : a -> 비교할 첫 번째 Bicycle 객체 참조, b -> 비교할 두 번째 Bicycle 객체 참조
    반환값   : bool -> true: a가 더 작음, false : b가 더 작음
*/
bool BicycleRepository::compare(Bicycle* a, Bicycle* b)
{
    return a->getId() < b->getId();
}