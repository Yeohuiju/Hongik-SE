#ifndef _LOGINUI_H
#define _LOGINUI_H

#include <fstream>

// ��ȯ ���� ������ ���� Ŭ���� ���� ����
class Login;

// �α��� ����� ���� Login boundary Ŭ���� ����
class LoginUI
{
private:
    std::ifstream& in_fp;       // ���� �Է��� ���� ofstream ����
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public:
    LoginUI(std::ifstream& in_fp, std::ofstream& out_fp);       // ������
    void startInterface();              // "2.1. �α���" ���
    void inputInfo(Login* control);     // �α��� ���� �Է� ����
};

#endif //_LOGINUI_H