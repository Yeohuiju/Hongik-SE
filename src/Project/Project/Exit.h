#ifndef _EXIT_H
#define _EXIT_H

#include <fstream>
#include "ExitUI.h"

// 종료 기능을 위한 Exit control 클래스 정의
class Exit
{
private:
    ExitUI exitUI;          // boundary 클래스
    std::ifstream& in_fp;   // 파일 입력을 위한 ifstream 참조
    std::ofstream& out_fp;  // 파일 출력을 위한 ofstream 참조

public:
    Exit(std::ifstream& in_fp, std::ofstream& out_fp);      // 생성자
    void execute();     // 종료 기능 수행

};

#endif //_EXIT_H