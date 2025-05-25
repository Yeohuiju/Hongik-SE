#ifndef _BICYCLE_H
#define _BICYCLE_H

#include <string>

// ������ Ŭ���� ����
class Bicycle
{
private:
    std::string id;     // ������ ID
    std::string name;   // ������ ��ǰ��
    bool isAvailable;   // ������ �뿩 ���� ����

public:
    Bicycle(std::string id, std::string name);      // ������
    std::string getId() const;                      // id(������ ID) �� ��ȯ
    void setAvailable(bool isAvailable);            // �뿩 ���� ����(isAvailable) ����
    std::string getInfo() const;                    // ������ ����(ID + ��ǰ��) ��ȯ
};

#endif //_BICYCLE_H