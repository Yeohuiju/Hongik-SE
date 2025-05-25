#include "Logout.h"

/*
   �Լ� �̸� : Logout::Logout()
   ���      : Logout ��ü ����
   ���� ���� : userSession -> ���� �α����� User ������ ������ �ִ� UserSession ��ü ����, out_fp -> ��� ���� ��Ʈ�� ����
   ��ȯ��    : ����
*/
Logout::Logout(UserSession* userSession, std::ofstream& out_fp) : userSession(userSession), logoutUI(out_fp) { }

/*
   �Լ� �̸� : Logout::execute()
   ���     : �α׾ƿ� ��� ����. �ý��� ���� ���
   ���� ���� : ����
   ��ȯ��   : ����
*/
void Logout::execute()
{
	std::string userId = (userSession->getCurrentUser())->getId();		// �α׾ƿ��� ������� ID Ȯ��
	logoutUI.startInterface(userId);		// "2.2. �α׾ƿ�" �� �α׾ƿ��� ������� ID ���
}