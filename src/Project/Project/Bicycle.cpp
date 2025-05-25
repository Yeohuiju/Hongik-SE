#include "Bicycle.h"

/*
    �Լ� �̸� : Bicycle::Bicycle()
    ���     : Bicycle ��ü ����
    ���� ���� : id -> ������ ID, name -> ������ ��ǰ��
    ��ȯ��   : ����
*/
Bicycle::Bicycle(std::string id, std::string name) : id(id), name(name) { }

/*
    �Լ� �̸� : Bicycle::getId()
    ���     : id(������ ID) �� ��ȯ
    ���� ���� : ����
    ��ȯ��   : string -> id(������ ID) ��
*/
std::string Bicycle::getId() const
{
    return id;
}

/*
    �Լ� �̸� : Bicycle::setAvailable()
    ���     : �뿩 ���� ���θ� ���� ���� ������ ����
    ���� ���� : isAvailable -> �뿩 ���� ����
    ��ȯ��   : ����
*/
void Bicycle::setAvailable(bool isAvailable)
{
    this->isAvailable = isAvailable;
}

/*
    �Լ� �̸� : Bicycle::getInfo()
    ���     : ������ ID�� ��ǰ���� �ϳ��� ���ڿ��� ���ļ� ��ȯ
    ���� ���� : ����
    ��ȯ��   : string -> ������ ID�� ��ǰ���� ��ģ ���ڿ�
 */
std::string Bicycle::getInfo() const
{
    return id + " " + name;
}