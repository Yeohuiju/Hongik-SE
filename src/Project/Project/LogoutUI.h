#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include <fstream>

// �α׾ƿ� ����� ���� Logout boundary Ŭ���� ����
class LogoutUI
{
private:
    std::ofstream& out_fp;      // ���� ����� ���� ofstream ����

public:
    LogoutUI(std::ofstream& out_fp);        // ������
    void startInterface(std::string id);    // �ý��� ���� ���
};

#endif //_LOGOUTUI_H