#include "ShowRentalUI.h"

/*
	함수 이름 : ShowRentalUI::ShowRentalUI()
	기능	  : ShowRentalUI 객체 생성
	전달 인자 : out_fp -> 출력 파일 스트림 참조
	반환값 	 : 없음
*/
ShowRentalUI::ShowRentalUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	함수 이름 : ShowRentalUI::startInterface()
	기능	  : "5.1. 자전거 대여 리스트" 출력 후 로그인 한 사용자가 대여한 모든 자전거의 정보(ID + 제품명) 출력
	전달 인자 : info -> 대여한 모든 자전거의 정보
	반환값	  : 없음
*/
void ShowRentalUI::startInterface(std::string info) 
{
	out_fp << "5.1. 자전거 대여 리스트" << std::endl;		// "5.1. 자전거 대여 리스트" 출력
	out_fp << info << std::endl;							// 대여한 모든 자전거의 정보 출력
}