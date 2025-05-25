#ifndef _RENTAL_H
#define _RENTAL_H

// ��ȯ ���� ������ ���� Ŭ���� ���� ����
class Member;
class Bicycle;

// ������ �뿩 ����(Rental) Ŭ���� ����
class Rental 
{
private: 
    Member* member;     // �뿩�� ȸ��
    Bicycle* bicycle;   // �뿩�� ������

public: 
    Rental(Member* member, Bicycle* bicycle);       // ������
    Bicycle* getBicycle() const;                    // bicycle(�뿩�� ������) ��ȯ
};

#endif //_RENTAL_H