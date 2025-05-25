#include "Rental.h"

/*
    �Լ� �̸� : Rental::Rental()
    ���      : Rental ��ü ����
    ���� ���� : member -> �뿩�� ȸ�� ��ü ����, bicycle -> �뿩�� ������ ��ü ����
    ��ȯ��    : ����
*/
Rental::Rental(Member* member, Bicycle* bicycle) : member(member), bicycle(bicycle) { }

/*
    �Լ� �̸� : Rental::getBicycle()
    ���      : �뿩�� ������(bicycle) ��ü ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : Bicycle* -> �뿩�� ������(bicycle) ��ü ����
*/
Bicycle* Rental::getBicycle() const
{
    return bicycle;
}