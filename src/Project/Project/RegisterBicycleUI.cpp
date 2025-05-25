#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"

/*
	�Լ� �̸� : RegisterBicycleUI::RegisterBicycleUI()
	���	  : RegisterBicycleUI ��ü ����
	���� ���� : in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��	 : ����
*/
RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	�Լ� �̸� : RegisterBicycleUI::startInterface() 
	���	  : "3.1. ������ ���" ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterBicycleUI::startInterface() 
{
	out_fp << "3.1. ������ ���" << std::endl;
}

/*
	�Լ� �̸� ; RegisterBicycleUI::inputInfo()
	���	  : ����� �������� ������ �Է¹޾� ���ο� ������ ���� ���
	���� ���� : control -> ������ ��� control Ŭ���� ����
	��ȯ��	  : ����
*/
void RegisterBicycleUI::inputInfo(RegisterBicycle* control) 
{
	std::string id;		// ����� �������� ID
	std::string name;	// ����� �������� ��ǰ��

	in_fp >> id >> name;	// ������ ���� �Է� ����
	out_fp << control->registerBicycle(id, name) << std::endl;		// ������ ��� �� ����� ������ ���� ���
}