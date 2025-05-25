#include "ShowRentalUI.h"

/*
	�Լ� �̸� : ShowRentalUI::ShowRentalUI()
	���	  : ShowRentalUI ��ü ����
	���� ���� : out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ�� 	 : ����
*/
ShowRentalUI::ShowRentalUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	�Լ� �̸� : ShowRentalUI::startInterface()
	���	  : "5.1. ������ �뿩 ����Ʈ" ��� �� �α��� �� ����ڰ� �뿩�� ��� �������� ����(ID + ��ǰ��) ���
	���� ���� : info -> �뿩�� ��� �������� ����
	��ȯ��	  : ����
*/
void ShowRentalUI::startInterface(std::string info) 
{
	out_fp << "5.1. ������ �뿩 ����Ʈ" << std::endl;		// "5.1. ������ �뿩 ����Ʈ" ���
	out_fp << info << std::endl;							// �뿩�� ��� �������� ���� ���
}