#ifndef _SHOWRENTALUI_H
#define _SHOWRENTALUI_H

#include <fstream>

// 자전거 대여 정보 조회 기능을 위한 ShowRental boundary 클래스 정의
class ShowRentalUI 
{
private:
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public: 
    ShowRentalUI(std::ofstream& out_fp);        // 생성자
    void startInterface(std::string info);      // 시스템 응답 출력
};

#endif //_SHOWRENTALUI_H