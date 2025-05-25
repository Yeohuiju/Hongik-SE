#ifndef _REGISTERBICYCLEUI_H
#define _REGISTERBICYCLEUI_H

#include <fstream>

// ��ȯ ���� ������ ���� Ŭ���� ���� ����
class RegisterBicycle;

class RegisterBicycleUI 
{
private:
    std::ifstream& in_fp;       // ���� �Է��� ���� ofstream ����
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public: 
    RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);     // ������
    void startInterface();          // "3.1. ������ ���" ���
    void inputInfo(RegisterBicycle* control);   // ����� ������ ���� �Է� ����
};

#endif //_REGISTERBICYCLEUI_H