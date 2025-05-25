#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include <fstream>

// 로그아웃 기능을 위한 Logout boundary 클래스 정의
class LogoutUI
{
private:
    std::ofstream& out_fp;      // 파일 출력을 위한 ofstream 참조

public:
    LogoutUI(std::ofstream& out_fp);        // 생성자
    void startInterface(std::string id);    // 시스템 응답 출력
};

#endif //_LOGOUTUI_H