#include "LogoutUI.h"

/*
	�Լ� �̸� : LogoutUI::LogoutUI()
	���	 : LogoutUI ��ü ����
	���� ���� : out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ�� 	 : ����
*/
LogoutUI::LogoutUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	�Լ� �̸� : LogoutUI::startInterface()
	���	 : "2.2. �α׾ƿ�" ��� �� �α׾ƿ��� ������� ID ���
	���� ���� : id -> �α׾ƿ� �� ������� ID
	��ȯ�� 	 : ����
*/
void LogoutUI::startInterface(std::string id)
{
	out_fp << "2.2. �α׾ƿ�" << std::endl;					// "2.2. �α׾ƿ�" ���
	out_fp << "> " << id << std::endl << std::endl;			// �α׾ƿ� �� ������� ID ���	
}