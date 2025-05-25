#include "RegisterUserUI.h"
#include "RegisterUser.h"

/*
	�Լ� �̸� : RegisterUserUI::RegisterUserUI()
	���	  : RegisterUser ��ü ����
	���� ���� : in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��    : ����
*/
RegisterUserUI::RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	�Լ� �̸� : RegisterUserUI::startInterface()
	���	  : "1.1. ȸ������" ���
	���� ���� : ����
	��ȯ��	  : ����
*/
void RegisterUserUI::startInterface()
{
	out_fp << "1.1. ȸ������" << std::endl;
}

/*
	�Լ� �̸� :  RegisterUserUI::inputInfo()
	���	  : ȸ�����Կ� �ʿ��� ������ �Է¹޾� Member ��ü�� �����ϰ� ����
	���� ���� : RegisterUser* -> ȸ������ control Ŭ���� ����
	��ȯ��    : ����
*/
void RegisterUserUI::inputInfo(RegisterUser* control)
{
	std::string id;				// ������ ȸ���� id
	std::string pwd;			// ������ ȸ���� ��й�ȣ
	std::string phoneNumber;	// ������ ȸ���� ��ȭ��ȣ

	in_fp >> id >> pwd >> phoneNumber;		// ȸ�� ���� �Է� ����

	out_fp << control->registerUser(id, pwd, phoneNumber) << std::endl;		// Member ��ü ���� �� ���� �� ������ ȸ�� ���� ���
}