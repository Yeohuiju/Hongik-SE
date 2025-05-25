#include "Member.h"

/*
    �Լ� �̸� : Member::Member()
    ���     : Member ��ü ����
    ���� ���� : id -> ����� ID, pwd -> ����� ��й�ȣ, phoneNumber -> ��ȭ��ȣ
    ��ȯ��   : ����
*/
Member::Member(std::string id, std::string pwd, std::string phoneNumber) : User(id, pwd), phoneNumber(phoneNumber) { }

/*
    �Լ� �̸� : Member::getPhoneNumber()
    ���     : ��ȭ��ȣ(phoneNumber) �� ��ȯ
    ���� ���� : ����
    ��ȯ��   : string -> ��ȭ��ȣ
*/
std::string Member::getPhoneNumber() const
{
    return phoneNumber;
}

/*
    �Լ� �̸� : Member::getRentalList()
    ���     : �뿩 ���� ����Ʈ(rentalList) ��ü ���� ��ȯ
    ���� ���� : ����
    ��ȯ��   : RentalList* -> �뿩 ���� ����Ʈ(rentalList) ��ü ����
*/
RentalList* Member::getRentalList()
{
    return &rentalList;
}