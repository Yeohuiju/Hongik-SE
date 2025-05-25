#ifndef _REGISTERBICYCLEUI_H
#define _REGISTERBICYCLEUI_H

#include <fstream>

// 순환 참조 방지를 위한 클래스 전방 선언
class RegisterBicycle;

class RegisterBicycleUI 
{
private:
    std::ifstream& in_fp;       // 파일 입력을 위한 ofstream 참조
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public: 
    RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);     // 생성자
    void startInterface();          // "3.1. 자전거 등록" 출력
    void inputInfo(RegisterBicycle* control);   // 등록할 자전거 정보 입력 받음
};

#endif //_REGISTERBICYCLEUI_H