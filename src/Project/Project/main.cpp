// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <fstream>

#include "UserRepository.h"
#include "Admin.h"
#include "UserSession.h"

#include "RegisterUser.h"
#include "Login.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
//void program_exit();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}
void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    UserRepository* userRepository = new UserRepository();
    UserSession* userSession = new UserSession();

    userRepository->save(new Admin("admin", "admin"));

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
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