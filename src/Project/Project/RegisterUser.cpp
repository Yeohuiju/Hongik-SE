#include "RegisterUser.h"

/*
    �Լ� �̸� : RegisterUser::RegisterUser()
    ���      : RegisterUser ��ü ����
    ���� ���� : userRepository -> ��ü User�� �����ϴ� UserRepository ��ü ����,in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
    ��ȯ��    : ����
*/
RegisterUser::RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), registerUserUI(in_fp, out_fp) { }

/*
    �Լ� �̸� ; RegisterUser::getRegisterUserUI()
    ���      : boundary Ŭ���� ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : RegisterUserUI* -> boundary Ŭ���� ����
*/
RegisterUserUI* RegisterUser::getRegisterUserUI()
{
    return &registerUserUI;
}

/*
    �Լ� �̸� : RegisterUser::registerUser()
    ���      : �Է��� ������ ���ο� ȸ�� ��ü ���� �� ����
    ���� ���� : id -> ����� ID, pwd -> ����� ��й�ȣ, phoneNumber -> ��ȭ��ȣ
    ��ȯ��    : string -> ���� ������ ������� ����(ID + ��й�ȣ + ��ȭ��ȣ)
*/
std::string RegisterUser::registerUser(std::string id, std::string pwd, std::string phoneNumber) {
    Member* member = new Member(id, pwd, phoneNumber);      // ���ο� Member ��ü ����
    this->userRepository->save(member);     // ���ο� Member ��ü ���� ����

    return "> " + member->getId() + " " + member->getPwd() + " " + member->getPhoneNumber() + "\n";
}

/* 
    �Լ� �̸� : RegisterUser::execute() 
    ���      : ȸ������ ��� ����. �ʱ� �ý��� ���� ���
    ���� ���� : ����
    ��ȯ��    : ����
*/
void RegisterUser::execute() 
{
    registerUserUI.startInterface();
}