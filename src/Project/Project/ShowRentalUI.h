#ifndef _SHOWRENTALUI_H
#define _SHOWRENTALUI_H

#include <fstream>

// ������ �뿩 ���� ��ȸ ����� ���� ShowRental boundary Ŭ���� ����
class ShowRentalUI 
{
private:
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public: 
    ShowRentalUI(std::ofstream& out_fp);        // ������
    void startInterface(std::string info);      // �ý��� ���� ���
};

#endif //_SHOWRENTALUI_H