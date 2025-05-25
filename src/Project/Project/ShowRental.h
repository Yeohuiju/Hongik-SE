#ifndef _SHOWRENTAL_H
#define _SHOWRENTAL_H

#include "ShowRentalUI.h"
#include "UserSession.h"
#include "Member.h"
#include "Bicycle.h"

// ������ �뿩 ���� ��ȸ ����� ���� ShowRental control Ŭ���� ����
class ShowRental 
{
private:
    ShowRentalUI showRentalUI;      // boundary Ŭ����
    UserSession* userSession;       // ���� �α����� User ������ ������ �ִ� UserSession ��ü ����

public: 
    ShowRental(UserSession* userSession, std::ofstream& out_fp);        // ������
    void execute();     // ������ �뿩 ���� ��ȸ ��� ����
};

#endif //_SHOWRENTAL_H