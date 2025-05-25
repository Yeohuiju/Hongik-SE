#include "Logout.h"

/*
   함수 이름 : Logout::Logout()
   기능      : Logout 객체 생성
   전달 인자 : userSession -> 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조, out_fp -> 출력 파일 스트림 참조
   반환값    : 없음
*/
Logout::Logout(UserSession* userSession, std::ofstream& out_fp) : userSession(userSession), logoutUI(out_fp) { }

/*
   함수 이름 : Logout::execute()
   기능     : 로그아웃 기능 수행. 시스템 응답 출력
   전달 인자 : 없음
   반환값   : 없음
*/
void Logout::execute()
{
	std::string userId = (userSession->getCurrentUser())->getId();		// 로그아웃한 사용자의 ID 확인
	logoutUI.startInterface(userId);		// "2.2. 로그아웃" 및 로그아웃한 사용자의 ID 출력
}