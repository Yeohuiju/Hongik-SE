#ifndef _LOGINUI_H
#define _LOGINUI_H

#include <fstream>

// 순환 참조 방지를 위한 클래스 전방 선언
class Login;

// 로그인 기능을 위한 Login boundary 클래스 정의
class LoginUI
{
private:
    std::ifstream& in_fp;       // 파일 입력을 위한 ofstream 참조
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public:
    LoginUI(std::ifstream& in_fp, std::ofstream& out_fp);       // 생성자
    void startInterface();              // "2.1. 로그인" 출력
    void inputInfo(Login* control);     // 로그인 정보 입력 받음
};

#endif //_LOGINUI_H