#ifndef _REGISTERUSERUI_H
#define _REGISTERUSERUI_H

#include <fstream> 

// 순환 참조 방지를 위한 클래스 전방 선언
class RegisterUser;

// 회원가입 기능을 위한 RegisterUser boundary 클래스 정의
class RegisterUserUI 
{
private: 
    std::ifstream& in_fp;       // 파일 입력을 위한 ofstream 참조
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public: 
    RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp);        // 생성자
    void startInterface();                      // "1.1. 회원가입" 출력
    void inputInfo(RegisterUser* control);      // 가입할 회원 정보 입력 받음
};

#endif //_REGISTERUSERUI_H