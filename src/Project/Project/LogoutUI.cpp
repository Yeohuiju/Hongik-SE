#include "LogoutUI.h"

/*
	함수 이름 : LogoutUI::LogoutUI()
	기능	 : LogoutUI 객체 생성
	전달 인자 : out_fp -> 출력 파일 스트림 참조
	반환값 	 : 없음
*/
LogoutUI::LogoutUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	함수 이름 : LogoutUI::startInterface()
	기능	 : "2.2. 로그아웃" 출력 후 로그아웃한 사용자의 ID 출력
	전달 인자 : id -> 로그아웃 한 사용자의 ID
	반환값 	 : 없음
*/
void LogoutUI::startInterface(std::string id)
{
	out_fp << "2.2. 로그아웃" << std::endl;					// "2.2. 로그아웃" 출력
	out_fp << "> " << id << std::endl << std::endl;			// 로그아웃 한 사용자의 ID 출력	
}