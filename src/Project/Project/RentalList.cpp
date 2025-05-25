#include "RentalList.h"
#include "Bicycle.h"

/*
    �Լ� �̸� : RentalList::addRental()
    ���      : ���ο� Rental ��ü�� �����͸� rentalList ���Ϳ� �߰� �� ����
    ���� ���� : rental -> �߰��� Rental ��ü ������
    ��ȯ��    : ����
*/
void RentalList::addRental(Rental* rental) 
{
    rentalList.push_back(rental);       // rentalList ���Ϳ� �߰�
    sort(rentalList.begin(), rentalList.end(), &compare);       //  Rental ��ü�� Bicycle ��ü�� id ���� �������� ����
}

/*
    �Լ� �̸� : RentalList::getRentalList()
    ���      : Rental ��ü ������ ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : vector<Rental*> -> rentalList(Rental ������ ����)
*/
std::vector<Rental*> RentalList::getRentalList() const
{
    return rentalList;
}

/*
    �Լ� �̸� : RentalList::compare()
    ���      : ������ ���� ���Լ��� Rental ��ü�� Bicycle ��ü�� id ���� �������� ����
    ���� ���� : a -> ���� ù ��° Rental ��ü ����, b -> ���� �� ��° Rental ��ü ����
    ��ȯ��   : bool -> true: a�� �� ����, false : b�� �� ����
*/
bool RentalList::compare(Rental* a, Rental* b)
{
    return (a->getBicycle())->getId() < (b->getBicycle())->getId();
}