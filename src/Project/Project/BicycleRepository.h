#ifndef _BICYCLEREPOSITORY_H
#define _BICYCLEREPOSITORY_H

#include <vector>
#include <algorithm>
#include "Bicycle.h"

// ��ü Bicycle ��ü�� �����ϴ� BicycleRepository Ŭ���� ����
class BicycleRepository
{
private:
    std::vector<Bicycle*> bicycleList;              // Biclcye ��ü ����
    static bool compare(Bicycle* a, Bicycle* b);    // ������ ���� �� �Լ�

public:
    void save(Bicycle* bicycle);                // ���ο� Bicycle ��ü�� ���Ϳ� �߰�
    Bicycle* findById(std::string id) const;    // ���޹��� id�� id�� ������ Bicycle ��ü ��ȯ
};

#endif //_BICYCLEREPOSITORY_H