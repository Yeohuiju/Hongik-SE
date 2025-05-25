#include "Bicycle.h"

/*
    함수 이름 : Bicycle::Bicycle()
    기능     : Bicycle 객체 생성
    전달 인자 : id -> 자전거 ID, name -> 자전거 제품명
    반환값   : 없음
*/
Bicycle::Bicycle(std::string id, std::string name) : id(id), name(name) { }

/*
    함수 이름 : Bicycle::getId()
    기능     : id(자전거 ID) 값 반환
    전달 인자 : 없음
    반환값   : string -> id(자전거 ID) 값
*/
std::string Bicycle::getId() const
{
    return id;
}

/*
    함수 이름 : Bicycle::setAvailable()
    기능     : 대여 가능 여부를 전달 인자 값으로 설정
    전달 인자 : isAvailable -> 대여 가능 여부
    반환값   : 없음
*/
void Bicycle::setAvailable(bool isAvailable)
{
    this->isAvailable = isAvailable;
}

/*
    함수 이름 : Bicycle::getInfo()
    기능     : 자전거 ID와 제품명을 하나의 문자열로 합쳐서 반환
    전달 인자 : 없음
    반환값   : string -> 자전거 ID와 제품명은 합친 문자열
 */
std::string Bicycle::getInfo() const
{
    return id + " " + name;
}