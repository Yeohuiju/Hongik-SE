#include "RegisterBicycle.h"

/*
    �Լ� �̸� : RegisterBicycle::RegisterBicycle()
    ���      : RegisterBicycle ��ü ����
    ���� ���� : userSession -> ���� �α����� User ������ ������ �ִ� UserSession ��ü ����, bicycleRepository -> ��ü Bicycle�� �����ϴ� BicycleRepository ��ü ����,
              in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
    ��ȯ��   : ����
*/
RegisterBicycle::RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), registerBicycleUI(in_fp, out_fp) { }

/*
    �Լ� �̸� : RegisterBicycle::getRegisterBicycleUI()
    ���      : boundary Ŭ���� ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : RegisterBicycleUI* -> boundary Ŭ���� ����
*/
RegisterBicycleUI* RegisterBicycle::getRegisterBicycleUI()
{
    return &registerBicycleUI;
}

/*
    �Լ� �̸� : RegisterBicycle::registerBicycle()
    ���      : ���ο� ������ ������ �Է¹޾� �� ������ ��ü ���� �� ����
    ���� ���� : id -> ������ ID, name -> ������ ��ǰ��
    ��ȯ��    : ������ ������ ����(������ ID + ��ȭ��ȣ)
*/
std::string RegisterBicycle::registerBicycle(std::string id, std::string name) {
    Bicycle* bicycle = new Bicycle(id, name);       // ���ο� Bicycle ��ü ����
    bicycleRepository->save(bicycle);               // bicycleRepository�� ���ο� Bicycle ��ü ���� ����

    return "> " + bicycle->getInfo() + "\n";
}

/*
    �Լ� �̸� : RegisterBicycle::execute()
    ���      : ������ ��� ����� ����. �ʱ� �ý��� ���� ���
    ���� ���� : ����
    ��ȯ��    : ����
*/
void RegisterBicycle::execute() {
    if (userSession->isAdmin())     // �����ڷ� �α����� ��쿡�� ��� ����
    {
        registerBicycleUI.startInterface();     // "3.1. ������ ���" ���
    }
}