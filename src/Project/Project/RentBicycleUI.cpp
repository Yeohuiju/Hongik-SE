#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
	함수 이름 : RentBicycleUI::RentBicycleUI()
	기능	  : RentBicycleUI 객체 생성
	전달 인자 : in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
	반환값	  : 없음
*/
RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	함수 이름 : RentBicycleUI::startInterface() 
	기능	  : "4.1. 자전거 대여" 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBicycleUI::startInterface() 
{
	out_fp << "4.1. 자전거 대여" << std::endl;
}

/*
	함수 이름 : RentBicycleUI::inputInfo() 
	기능      : 대여할 자전거 id를 입력 받아 자전거 대여
	전달 인자 : control -> 자전거 대여 control 클래스 참조
	반환값	  : 없음
*/
void RentBicycleUI::inputInfo(RentBicycle* control) 
{
	std::string id;		// 대여할 자전거 id
	in_fp >> id;		// 대여할 자전거 id 입력받음

	out_fp << control->rentBicycle(id) << std::endl;	// 자전거 대여 후 대여한 자전거 정보(ID + 제품명) 출력
}