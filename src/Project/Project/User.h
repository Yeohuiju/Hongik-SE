#ifndef _USER_H
#define _USER_H

#include <string>

// ȸ���� �����ڸ� �����ϴ� �����(User) Ŭ���� ����
class User
{
protected:
	std::string id;		// ����� ID
	std::string pwd;	// ����� ��й�ȣ

public:
	User(std::string id, std::string pwd);		// ������
	std::string getId() const;					// id(����� ID) �� ��ȯ
	std::string getPwd() const;					// pwd(����� ��й�ȣ) �� ��ȯ
};

#endif // _USER_H
