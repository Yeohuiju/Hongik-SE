#include "UserSession.h"

/*
    �Լ� �̸� : UserSession::UserSession() 
    ���      : UserSession ��ü ����
    ���� ���� : ����
    ��ȯ��    : ����
*/
UserSession::UserSession() : currentUser(nullptr), adminFlag(false) { }

/*
    �Լ� �̸� : UserSession::login()
    ���      : ���� ���� ����ڷ� �α���
    ���� ���� : user -> �α����� �����
    ��ȯ��    : ����
*/
void UserSession::login(User* user) 
{
    currentUser = user;                     // �Է� ���� ����ڷ� ���� ����� ����
    adminFlag = user->getId() == "admin";   // ������ ����
}

/*
    �Լ� �̸� : UserSession::logout() 
    ���      : �α׾ƿ�
    ���� ���� : ����
    ��ȯ��    : ����
*/
void UserSession::logout() 
{
    currentUser = nullptr;      // ���� ����� ����
    adminFlag = false;          // ������ �ƴ�
}

/*
    �Լ� �̸� : UserSession::getCurrentUser()
    ���      : ���� �α����� User ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : User* -> ���� �α����� User ����
*/
User* UserSession::getCurrentUser() const
{
    return currentUser;
}

/*
    �Լ� �̸� : UserSession::isAdmin()
    ���      : ���� �α����� ������� ������ ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : bool -> ���� �α����� ������� ������ ����
*/
bool UserSession::isAdmin() const 
{
    return adminFlag;
}