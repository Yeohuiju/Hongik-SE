#include "ExitUI.h"

/*
	함수 이름 : ExitUI::ExitUI()
	기능	 : ExitUI 객체 생성
	전달 인자 : out_fp -> 출력 파일 스트림 참조
	반환값	 : 없음
*/
ExitUI::ExitUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	함수 이름 : ExitUI::startInterface()
	기능	 : "6.1. 종료" 출력
	전달 인자 : 없음
	반환값   : 없음
*/
void ExitUI::startInterface()
{
	out_fp << "6.1. 종료";
}