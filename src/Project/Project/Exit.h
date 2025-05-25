#ifndef _EXIT_H
#define _EXIT_H

#include <fstream>
#include "ExitUI.h"

// ���� ����� ���� Exit control Ŭ���� ����
class Exit
{
private:
    ExitUI exitUI;          // boundary Ŭ����
    std::ifstream& in_fp;   // ���� �Է��� ���� ifstream ����
    std::ofstream& out_fp;  // ���� ����� ���� ofstream ����

public:
    Exit(std::ifstream& in_fp, std::ofstream& out_fp);      // ������
    void execute();     // ���� ��� ����

};

#endif //_EXIT_H