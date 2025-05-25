#include "Login.h"

/*
    �Լ� �̸� : Login::Login()
    ���     : Login ��ü ����
    ���� ���� : userRepository -> ��ü User�� �����ϴ� UserRepository ��ü ����, userSession -> ���� �α����� User ������ ������ �ִ� UserSession ��ü ����,
              in_fp -> �Է� ���� ��Ʈ�� ����, out_fp -> ��� ���� ��Ʈ�� ����
    ��ȯ��   : ����
*/
Login::Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), userSession(userSession), loginUI(in_fp, out_fp) { }

/*
    �Լ� �̸� : Login::getLoginUI()
    ���     : boundary Ŭ���� ���� ��ȯ
    ���� ���� : ����
    ��ȯ��   : LoginUI* -> boundary Ŭ���� ����
*/
LoginUI* Login::getLoginUI()
{
    return &loginUI;
}

/*
    �Լ� �̸� : Login::login()
    ���     : �Է��� ������ �ش��ϴ� ����ڷ� �α���
    ���� ���� : id -> ����� ID, pwd -> ����� ��й�ȣ
    ��ȯ��   : string -> �α����� ������� ID�� ��й�ȣ
*/
std::string Login::login(std::string id, std::string pwd)
{
    User* user = userRepository->findById(id);      // �Է��� id�� User �˻�

    if (user->getPwd() == pwd)      // ��й�ȣ�� ��ġ�� ���
    {
        userSession->login(user);   // ���� ����ڷ� �Է��� ������ ����� ���� �Է�
    }

    return "> " + user->getId() + " " + user->getPwd() + "\n";
}

/*
    �Լ� �̸� : Login::execute()
    ���     : �α��� ����� ����. �ʱ� �ý��� ���� ���
    ���� ���� : ����
    ��ȯ��   : ����
*/
void Login::execute()
{
    loginUI.startInterface();
}