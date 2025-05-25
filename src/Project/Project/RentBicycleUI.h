#ifndef _RENTBICYCLEUI_H
#define _RENTBICYCLEUI_H

#include <fstream>

// 순환 참조 방지를 위한 클래스 전방 선언
class RentBicycle;

// 자전거 대여 기능을 위한 RentBicycle boundary 클래스 정의
class RentBicycleUI 
{
private:
    std::ifstream& in_fp;       // 파일 입력을 위한 ofstream 참조
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public: 
    RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);     // 생성자
    void startInterface();                  // "4.1. 자전거 대여" 출력
    void inputInfo(RentBicycle* control);   // 대여할 자전거 정보(id) 입력 받음
};

#endif //_RENTBICYCLEUI_H