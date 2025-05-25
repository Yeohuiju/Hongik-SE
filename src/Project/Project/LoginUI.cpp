#include "LoginUI.h"
#include "Login.h"

/*
	함수 이름 : LoginUI::LoginUI()
	기능	 : LoginUI 객체 생성
	전달 인자 : in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
	반환값	 : 없음
*/
LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	함수 이름 : LoginUI::startInterface()
	기능	 : "2.1. 로그인" 출력
	전달 인자 : 없음
	반환값	 : 없음
*/
void LoginUI::startInterface()
{
	out_fp << "2.1. 로그인" << std::endl;
}

/*
	함수 이름 : LoginUI::inputInfo()
	기능	 : 로그인에 필요한 정보를 입력받아 입력한 사용자로 로그인
	전달 인자 : control -> 로그인 control 클래스 참조
	반환값 	 : 없음
*/
void LoginUI::inputInfo(Login* control)
{
	std::string id;		// 입력받을 id
	std::string pwd;	// 입력받을 비밀번호

	in_fp >> id >> pwd;		// 사용자 입력 받음
	out_fp << control->login(id, pwd) << std::endl;		// 로그인 후 로그인한 사용자 정보 출력
}