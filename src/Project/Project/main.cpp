// ��� ����
#include <stdio.h>
#include <string.h>
#include <fstream>

#include "UserRepository.h"
#include "Admin.h"
#include "UserSession.h"

#include "RegisterUser.h"
#include "Login.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
//void program_exit();

// ���� ����
ofstream out_fp;
ifstream in_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}
void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    UserRepository* userRepository = new UserRepository();
    UserSession* userSession = new UserSession();

    userRepository->save(new Admin("admin", "admin"));

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                RegisterUser* control = new RegisterUser(userRepository, in_fp, out_fp);

                control->execute();
                (control->getRegisterUserUI())->inputInfo(control);

                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                Login* control = new Login(userRepository, userSession, in_fp, out_fp);

                control->execute();
                (control->getLoginUI())->inputInfo(control);

                break;
            }


            }
        }
        }
    }
    return;
}