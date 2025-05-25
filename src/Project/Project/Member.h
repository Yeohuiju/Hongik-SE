#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include "RentalList.h"

// ȸ��(Member) Ŭ���� ����
class Member : public User
{
private:
    std::string phoneNumber;        // ��ȭ��ȣ
    RentalList rentalList;          // �뿩 ���� ����Ʈ

public:
    Member(std::string id, std::string pwd, std::string phoneNumber);       // ������
    std::string getPhoneNumber() const;     // phoneNumber(��ȭ��ȣ) �� ��ȯ
    RentalList* getRentalList();            // rentalList(�뿩 ���� ����Ʈ) ��ȯ
};

#endif //_MEMBER_H