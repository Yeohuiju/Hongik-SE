#ifndef _EXITUI_H
#define _EXITUI_H

#include <fstream>

// 종료 기능을 위한 Exit boundary 클래스 정의
class ExitUI
{
private:
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public:
    ExitUI(std::ofstream& out_fp);      // 생성자
    void startInterface();              // "6.1. 종료" 출력
};

#endif //_EXITUI_H