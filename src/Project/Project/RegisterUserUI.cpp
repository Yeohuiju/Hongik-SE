#include "RegisterUserUI.h"
#include "RegisterUser.h"

RegisterUserUI::RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

void RegisterUserUI::startInterface()
{
	out_fp << "1.1. 회원가입" << std::endl;
}

void RegisterUserUI::inputInfo(RegisterUser* control)
{
	std::string id;
	std::string pwd;
	std::string phoneNumber;

	in_fp >> id >> pwd >> phoneNumber;

	std::string memberInfo = control->registerUser(id, pwd, phoneNumber);
	out_fp << memberInfo;
}