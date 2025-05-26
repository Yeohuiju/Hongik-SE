// ��� ����
#include <stdio.h>
#include <string.h>
#include <fstream>

// entity Ŭ���� ��� ����
#include "UserRepository.h"
#include "BicycleRepository.h"
#include "Admin.h"
#include "UserSession.h"

// control Ŭ���� ��� ����
#include "RegisterUser.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"
#include "RentBicycle.h"
#include "ShowRental.h"
#include "Exit.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main()
{
    // ���� ����
    ofstream out_fp;
    ifstream in_fp;

    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // ��ü ����
    UserRepository* userRepository = new UserRepository();
    BicycleRepository* bicycleRepository = new BicycleRepository();
    UserSession* userSession = new UserSession();

    userRepository->save(new Admin("admin", "admin"));      // ������ ��ü ����

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
            case 1:   // "1.1. ȸ������" �޴�
            {
                RegisterUser* control = new RegisterUser(userRepository, in_fp, out_fp);    // control ��ü ����

                /*
                ȸ������ ��� ����
                */
                control->execute();
                (control->getRegisterUserUI())->inputInfo(control);

                delete control;
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:     // "2.1. �α���" �޴�
            {
                Login* control = new Login(userRepository, userSession, in_fp, out_fp);     // control ��ü ����

                /*
                �α��� ��� ����
                */
                control->execute();
                (control->getLoginUI())->inputInfo(control);

                delete control;
                break;
            }
            case 2:     // "2.2. �α׾ƿ�" �޴�
            {
                Logout* control = new Logout(userSession, out_fp);      // control ��ü ����

                control->execute();     // �α׾ƿ� ��� ����

                delete control;
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:     // "3.1. ������ ��� �޴�"
            {
                RegisterBicycle* control = new RegisterBicycle(userSession, bicycleRepository, in_fp, out_fp);      // control Ŭ���� ����

                /*
                ������ ��� ��� ����
                */
                control->execute();
                (control->getRegisterBicycleUI())->inputInfo(control);

                delete control;
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:     // "4.1. ������ �뿩" �޴�
            {
                RentBicycle* control = new RentBicycle(userSession, bicycleRepository, in_fp, out_fp);      // control ��ü ����

                /*
                ������ �뿩 ��� ����
                */
                control->execute();
                (control->getRentBicycleUI())->inputInfo(control);

                delete control;
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:     // "5.1. ������ �뿩 ���� ����Ʈ" �޴�
            {
                ShowRental* control = new ShowRental(userSession, out_fp);      // control ��ü ����

                control->execute();     // ������ �뿩 ���� ��ȸ ��� ����

                delete control;
                break;
            }
            }
            break;
        }
        case 6:
            switch (menu_level_2)
            {
            case 1:     // "6.1. ����" �޴�
            {
                is_program_exit = 1;

                Exit* control = new Exit(in_fp, out_fp);        // control ��ü ����

                control->execute();     // ���� ��� ����

                delete control;
                break;
            }
            }
            break;
        }
    }

    return 0;
}