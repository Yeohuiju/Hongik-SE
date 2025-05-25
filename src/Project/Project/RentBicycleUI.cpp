#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
	�Լ� �̸� : RentBicycleUI::RentBicycleUI()
	���	  : RentBicycleUI ��ü ����
	���� ���� : in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��	  : ����
*/
RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp) : in_fp(in_fp), out_fp(out_fp) { }

/*
	�Լ� �̸� : RentBicycleUI::startInterface() 
	���	  : "4.1. ������ �뿩" ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBicycleUI::startInterface() 
{
	out_fp << "4.1. ������ �뿩" << std::endl;
}

/*
	�Լ� �̸� : RentBicycleUI::inputInfo() 
	���      : �뿩�� ������ id�� �Է� �޾� ������ �뿩
	���� ���� : control -> ������ �뿩 control Ŭ���� ����
	��ȯ��	  : ����
*/
void RentBicycleUI::inputInfo(RentBicycle* control) 
{
	std::string id;		// �뿩�� ������ id
	in_fp >> id;		// �뿩�� ������ id �Է¹���

	out_fp << control->rentBicycle(id) << std::endl;	// ������ �뿩 �� �뿩�� ������ ����(ID + ��ǰ��) ���
}