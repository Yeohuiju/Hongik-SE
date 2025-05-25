#ifndef _REGISTERUSERUI_H
#define _REGISTERUSERUI_H

#include <fstream> 

// ��ȯ ���� ������ ���� Ŭ���� ���� ����
class RegisterUser;

// ȸ������ ����� ���� RegisterUser boundary Ŭ���� ����
class RegisterUserUI 
{
private: 
    std::ifstream& in_fp;       // ���� �Է��� ���� ofstream ����
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public: 
    RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp);        // ������
    void startInterface();                      // "1.1. ȸ������" ���
    void inputInfo(RegisterUser* control);      // ������ ȸ�� ���� �Է� ����
};

#endif //_REGISTERUSERUI_H