#include "RentBicycle.h"

/*
    �Լ� �̸� : RentBicycle::RentBicycle()
    ���      : RentBicycle ��ü ����
    ���� ���� : userSession -> ���� �α����� User ������ ������ �ִ� UserSession ��ü ����, bicycleRepository -> ��ü Bicycle�� �����ϴ� BicycleRepository ��ü ����,
                in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
    ��ȯ��    : ����
*/
RentBicycle::RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), rentBicycleUI(in_fp, out_fp) { }

/*
    �Լ� �̸� : RentBicycle::getRentBicycleUI()
    ���      : boundary Ŭ���� ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : RentBicycleUI* -> boundary Ŭ���� ����
*/
RentBicycleUI* RentBicycle::getRentBicycleUI()
{
    return &rentBicycleUI;
}

/*
    �Լ� �̸� : RentBicycle::rentBicycle()
    ���      : �Է��� id�� ���� �����Ÿ� ���� �α����� ����ڰ� �뿩������ ó��
    ���� ���� : id -> �뿩�� ������ id
    ��ȯ��    : string -> �뿩�� ������ ����(ID + ��ǰ��)
*/
std::string RentBicycle::rentBicycle(std::string id) {
    Bicycle* bicycle = bicycleRepository->findById(id);     // �뿩�� ������ id�� �˻�
    bicycle->setAvailable(false);       // �뿩 �Ұ�(�뿩 ��) ���·� ����

    Member* member = (Member*)(userSession->getCurrentUser());      // ���� �α����� ȸ�� Ȯ��

    Rental* rental = new Rental(member, bicycle);       // �뿩 ����(Rental) ����
    (member->getRentalList())->addRental(rental);       // ���� �α����� ȸ���� �뿩 ���� ����Ʈ�� �߰�

    return "> " + bicycle->getInfo() + "\n";
}

/*
    �Լ� �̸� : RentBicycle::execute()
    ���      : ���� �α����� ����ڰ� ȸ���� ��� �ʱ� �ý��� ���� ���
    ���� ���� : ����
    ��ȯ��    : ����
*/
void RentBicycle::execute() {
    if (!userSession->isAdmin())        // ���� �α����� ����ڰ� ȸ���� ���
    {
        rentBicycleUI.startInterface();
    }
}