#include "UserRepository.h"

/*
    �Լ� �̸� : UserRepository::save()
    ���      : ���ο� User ��ü�� �����͸� userList ���Ϳ� �߰�
    ���� ���� : user -> �߰��� User ��ü ������
    ��ȯ��    : ����
*/
void UserRepository::save(User* user) 
{
    userList.push_back(user);       // userList ���Ϳ� �߰�
    std::sort(userList.begin(), userList.end(), &compare);      // User ��ü�� id ���� �������� ����
}

/*
    �Լ� �̸� : UserRepository::findById()
    ���      : Ư�� id�� User ��ü�� ã�� �ش� ��ü ������ ��ȯ
    ���� ���� : id -> ã���� �ϴ� User ��ü�� id
    ��ȯ��    : User* -> ���� ���� id�� User ��ü ������
*/
User* UserRepository::findById(std::string id) const
{
    /*
    ������ id�� ���� User ��ü�� ã�� ������ ��ü User ��ü�� ���� �ݺ�
    */
    for (User* user : userList) 
    {
        if (user->getId() == id)    // ������ id�� User
        {
            return user;
        }
    }

    return nullptr;
}

/*
    �Լ� �̸� : UserRepository::compare()
    ���     : ������ ���� ���Լ��� User ��ü�� id ���� �������� ����
    ���� ���� : a -> ���� ù ��° User ��ü ����, b -> ���� �� ��° User ��ü ����
    ��ȯ��   : bool -> true: a�� �� ����, false : b�� �� ����
*/
bool UserRepository::compare(User* a, User* b)
{
    return a->getId() < b->getId();
}