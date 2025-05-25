#ifndef _RENTBICYCLEUI_H
#define _RENTBICYCLEUI_H

#include <fstream>

// ��ȯ ���� ������ ���� Ŭ���� ���� ����
class RentBicycle;

// ������ �뿩 ����� ���� RentBicycle boundary Ŭ���� ����
class RentBicycleUI 
{
private:
    std::ifstream& in_fp;       // ���� �Է��� ���� ofstream ����
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public: 
    RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);     // ������
    void startInterface();                  // "4.1. ������ �뿩" ���
    void inputInfo(RentBicycle* control);   // �뿩�� ������ ����(id) �Է� ����
};

#endif //_RENTBICYCLEUI_H