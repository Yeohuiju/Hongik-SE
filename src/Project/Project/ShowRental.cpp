#include "ShowRental.h"

/*
	�Լ� �̸� : ShowRental::ShowRental()
	���	  : ShowRental ��ü ����
	���� ���� : userSession -> ���� �α����� User ������ ������ �ִ� UserSession ��ü ����, out_fp -> ��� ���� ��Ʈ�� ����
    ��ȯ��    : ����
*/
ShowRental::ShowRental(UserSession* userSession, std::ofstream& out_fp) : userSession(userSession), showRentalUI(out_fp) { }

/*
	�Լ� �̸� : ShowRental::execute() 
	���	  : ���� �α����� ������� �뿩 ���� ����Ʈ ��ȸ
	���� ���� : ����
	��ȯ��    : ����
*/
void ShowRental::execute() 
{
	if (!userSession->isAdmin())	// ���� �α����� ����ڰ� ȸ���� ���
	{
		Member* member = (Member*)userSession->getCurrentUser();		// ���� �α����� ����� Ȯ��
		RentalList* rentalList = member->getRentalList();				// ���� ������� �뿩 ���� ����Ʈ Ȯ��

		std::string rentalInfo = "";

		/*
		�뿩 ���� ����Ʈ�� ��� �������� ���� ��ȸ
		*/
		for (Rental* rental : rentalList->getRentalList())
		{
			Bicycle* bicycle = rental->getBicycle();
			rentalInfo += "> " + bicycle->getInfo() + "\n";
		}

		showRentalUI.startInterface(rentalInfo);
	}
}