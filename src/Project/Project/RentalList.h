#ifndef _RENTALLIST_H
#define _RENTALLIST_H

#include <vector>
#include <algorithm>
#include "Rental.h"

// Ư�� ȸ���� Rental ��ü�� �����ϴ� RentalList Ŭ���� ����
class RentalList 
{
private: 
    std::vector<Rental*> rentalList;            // Rental ��ü ����
    static bool compare(Rental* a, Rental* b);  // ������ ���� �� �Լ�

public: 
    void addRental(Rental* rental);                 // ���ο� Rental ��ü�� ���Ϳ� �߰�
    std::vector<Rental*> getRentalList() const;     // �뿩 ����(Rental) ���� ��ȯ
};

#endif //_RENTALLIST_H