#include "User.h"

/*
    �Լ� �̸� : User::User()
    ���      : User ��ü ����
    ���� ���� : id -> ����� ID, pwd -> ����� ��й�ȣ
    ��ȯ��    : ����
*/
User::User(std::string id, std::string pwd) : id(id), pwd(pwd) { }

/*
    �Լ� �̸� :  User::getId()
    ���      : ID(id) �� ��ȯ
    ���� ���� : ����
    ��ȯ��    : string -> id
*/
std::string User::getId() const
{
    return id;
}

/*
    �Լ� �̸� : User::getPwd()
    ���      : ��й�ȣ(pwd) �� ��ȯ
    ���� ���� : ����
    ��ȯ��    : string -> ��й�ȣ
*/
std::string User::getPwd() const
{
    return pwd;
}