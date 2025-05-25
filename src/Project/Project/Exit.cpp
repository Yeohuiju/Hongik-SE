#include "Exit.h"

/*
	�Լ� �̸� : Exit::Exit()
	���	 : Exit ��ü ����
	���� ���� : in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
	��ȯ��	 : ����
*/
Exit::Exit(std::ifstream& in_fp, std::ofstream& out_fp) : exitUI(out_fp), in_fp(in_fp), out_fp(out_fp) { }

/*
	�Լ� �̸� : Exit::execute()
	���	 : ���� ��� ����. �ý��� ���� ��� �� ����� ���� ��Ʈ�� �ݱ�
	���� ���� : ����
	��ȯ�� 	 : ����
*/
void Exit::execute()
{
	exitUI.startInterface();	// �ý��� ���� ���

	in_fp.close();		// �Է� ���� ��Ʈ�� �ݱ�
	out_fp.close();		// ��� ���� ��Ʈ�� �ݱ�
}