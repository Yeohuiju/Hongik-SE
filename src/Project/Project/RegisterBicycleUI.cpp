#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"

/*
	함수 이름 : RegisterBicycleUI::RegisterBicycleUI()
	기능	  : RegisterBicycleUI 객체 생성
	전달 인자 : in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
	반환값	 : 없음
*/
RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	함수 이름 : RegisterBicycleUI::startInterface() 
	기능	  : "3.1. 자전거 등록" 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterBicycleUI::startInterface() 
{
	out_fp << "3.1. 자전거 등록" << std::endl;
}

/*
	함수 이름 ; RegisterBicycleUI::inputInfo()
	기능	  : 등록할 자전거의 정보를 입력받아 새로운 자전거 정보 등록
	전달 인자 : control -> 자전거 등록 control 클래스 참조
	반환값	  : 없음
*/
void RegisterBicycleUI::inputInfo(RegisterBicycle* control) 
{
	std::string id;		// 등록할 자전거의 ID
	std::string name;	// 등록할 자전거의 제품명

	in_fp >> id >> name;	// 자전거 정보 입력 받음
	out_fp << control->registerBicycle(id, name) << std::endl;		// 자전거 등록 후 등록한 자전거 정보 출력
}