#include "BicycleRepository.h"

/*
    �Լ� �̸� : BicycleRepository::save()
    ���     : ���ο� Bicycle ��ü�� �����͸� bicycleList ���Ϳ� �߰� �� ����
    ���� ���� : bicycle -> �߰��� Bicycle ��ü ������
    ��ȯ��   : ����
*/
void BicycleRepository::save(Bicycle* bicycle)
{
    bicycleList.push_back(bicycle);     // bicycleList ���Ϳ� �߰�
    sort(bicycleList.begin(), bicycleList.end(), &compare);     // Bicycle ��ü�� id ���� �������� ����
}

/*
    �Լ� �̸� : BicycleRepository::findById()
    ���     : Ư�� id�� Bicycle ��ü�� ã�� �ش� ��ü ������ ��ȯ
    ���� ���� : id -> ã���� �ϴ� Bicycle ��ü�� id
    ��ȯ��   : Bicycle* -> ���� ���� id�� Bicycle ��ü ������
*/
Bicycle* BicycleRepository::findById(std::string id) const
{

    /*
    ������ id�� ���� Bicycle ��ü�� ã�� ������ ��ü Bicycle ��ü�� ���� �ݺ�
    */
    for (Bicycle* bicycle : bicycleList)
    {
        if (bicycle->getId() == id)     // ������ id�� Bicycle
        {
            return bicycle;
        }
    }

    return nullptr;
}

/*
    �Լ� �̸� : BicycleRepository::compare()
    ���     : ������ ���� ���Լ��� Bicycle ��ü�� id ���� �������� ����
    ���� ���� : a -> ���� ù ��° Bicycle ��ü ����, b -> ���� �� ��° Bicycle ��ü ����
    ��ȯ��   : bool -> true: a�� �� ����, false : b�� �� ����
*/
bool BicycleRepository::compare(Bicycle* a, Bicycle* b)
{
    return a->getId() < b->getId();
}