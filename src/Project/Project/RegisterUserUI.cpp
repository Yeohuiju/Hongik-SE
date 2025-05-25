#include "RegisterUserUI.h"
#include "RegisterUser.h"

/*
	함수 이름 : RegisterUserUI::RegisterUserUI()
	기능	  : RegisterUser 객체 생성
	전달 인자 : in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
	반환값    : 없음
*/
RegisterUserUI::RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	함수 이름 : RegisterUserUI::startInterface()
	기능	  : "1.1. 회원가입" 출력
	전달 인자 : 없음
	반환값	  : 없음
*/
void RegisterUserUI::startInterface()
{
	out_fp << "1.1. 회원가입" << std::endl;
}

/*
	함수 이름 :  RegisterUserUI::inputInfo()
	기능	  : 회원가입에 필요한 정보를 입력받아 Member 객체를 생성하고 저장
	전달 인자 : RegisterUser* -> 회원가입 control 클래스 참조
	반환값    : 없음
*/
void RegisterUserUI::inputInfo(RegisterUser* control)
{
	std::string id;				// 가입할 회원의 id
	std::string pwd;			// 가입할 회원의 비밀번호
	std::string phoneNumber;	// 가입할 회원의 전화번호

	in_fp >> id >> pwd >> phoneNumber;		// 회원 정보 입력 받음

	out_fp << control->registerUser(id, pwd, phoneNumber) << std::endl;		// Member 객체 생성 및 저장 후 가입한 회원 정보 출력
}