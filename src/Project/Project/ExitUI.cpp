#include "ExitUI.h"

/*
	�Լ� �̸� : ExitUI::ExitUI()
	���	 : ExitUI ��ü ����
	���� ���� : out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��	 : ����
*/
ExitUI::ExitUI(std::ofstream& out_fp) : out_fp(out_fp) { }

/*
	�Լ� �̸� : ExitUI::startInterface()
	���	 : "6.1. ����" ���
	���� ���� : ����
	��ȯ��   : ����
*/
void ExitUI::startInterface()
{
	out_fp << "6.1. ����";
}