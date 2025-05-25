#ifndef _EXITUI_H
#define _EXITUI_H

#include <fstream>

// ���� ����� ���� Exit boundary Ŭ���� ����
class ExitUI
{
private:
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public:
    ExitUI(std::ofstream& out_fp);      // ������
    void startInterface();              // "6.1. ����" ���
};

#endif //_EXITUI_H