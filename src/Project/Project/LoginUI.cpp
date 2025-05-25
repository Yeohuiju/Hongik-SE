#include "LoginUI.h"
#include "Login.h"

/*
	�Լ� �̸� : LoginUI::LoginUI()
	���	 : LoginUI ��ü ����
	���� ���� : in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��	 : ����
*/
LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	�Լ� �̸� : LoginUI::startInterface()
	���	 : "2.1. �α���" ���
	���� ���� : ����
	��ȯ��	 : ����
*/
void LoginUI::startInterface()
{
	out_fp << "2.1. �α���" << std::endl;
}

/*
	�Լ� �̸� : LoginUI::inputInfo()
	���	 : �α��ο� �ʿ��� ������ �Է¹޾� �Է��� ����ڷ� �α���
	���� ���� : control -> �α��� control Ŭ���� ����
	��ȯ�� 	 : ����
*/
void LoginUI::inputInfo(Login* control)
{
	std::string id;		// �Է¹��� id
	std::string pwd;	// �Է¹��� ��й�ȣ

	in_fp >> id >> pwd;		// ����� �Է� ����
	out_fp << control->login(id, pwd) << std::endl;		// �α��� �� �α����� ����� ���� ���
}