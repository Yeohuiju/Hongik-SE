#ifndef _BICYCLE_H
#define _BICYCLE_H

#include <string>

// 자전거 클래스 정의
class Bicycle
{
private:
    std::string id;     // 자전거 ID
    std::string name;   // 자전거 제품명
    bool isAvailable;   // 자전거 대여 가능 여부

public:
    Bicycle(std::string id, std::string name);      // 생성자
    std::string getId() const;                      // id(자전거 ID) 값 반환
    void setAvailable(bool isAvailable);            // 대여 가능 여부(isAvailable) 설정
    std::string getInfo() const;                    // 자전거 정보(ID + 제품명) 반환
};

#endif //_BICYCLE_H