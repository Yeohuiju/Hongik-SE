// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <fstream>

// entity 클래스 헤더 선언
#include "UserRepository.h"
#include "BicycleRepository.h"
#include "Admin.h"
#include "UserSession.h"

// control 클래스 헤더 선언
#include "RegisterUser.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"
#include "RentBicycle.h"
#include "ShowRental.h"
#include "Exit.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main()
{
    // 변수 선언
    ofstream out_fp;
    ifstream in_fp;

    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // 객체 생성
    UserRepository* userRepository = new UserRepository();
    BicycleRepository* bicycleRepository = new BicycleRepository();
    UserSession* userSession = new UserSession();

    userRepository->save(new Admin("admin", "admin"));      // 관리자 객체 생성

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
            case 1:   // "1.1. 회원가입" 메뉴
            {
                RegisterUser* control = new RegisterUser(userRepository, in_fp, out_fp);    // control 객체 생성

                /*
                회원가입 기능 수행
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
            case 1:     // "2.1. 로그인" 메뉴
            {
                Login* control = new Login(userRepository, userSession, in_fp, out_fp);     // control 객체 생성

                /*
                로그인 기능 수행
                */
                control->execute();
                (control->getLoginUI())->inputInfo(control);

                delete control;
                break;
            }
            case 2:     // "2.2. 로그아웃" 메뉴
            {
                Logout* control = new Logout(userSession, out_fp);      // control 객체 생성

                control->execute();     // 로그아웃 기능 수행

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
            case 1:     // "3.1. 자전거 등록 메뉴"
            {
                RegisterBicycle* control = new RegisterBicycle(userSession, bicycleRepository, in_fp, out_fp);      // control 클래스 생성

                /*
                자전거 등록 기능 수행
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
            case 1:     // "4.1. 자전거 대여" 메뉴
            {
                RentBicycle* control = new RentBicycle(userSession, bicycleRepository, in_fp, out_fp);      // control 객체 생성

                /*
                자전거 대여 기능 수행
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
            case 1:     // "5.1. 자전거 대여 정보 리스트" 메뉴
            {
                ShowRental* control = new ShowRental(userSession, out_fp);      // control 객체 생성

                control->execute();     // 자전거 대여 정보 조회 기능 수행

                delete control;
                break;
            }
            }
            break;
        }
        case 6:
            switch (menu_level_2)
            {
            case 1:     // "6.1. 종료" 메뉴
            {
                is_program_exit = 1;

                Exit* control = new Exit(in_fp, out_fp);        // control 객체 생성

                control->execute();     // 종료 기능 수행

                delete control;
                break;
            }
            }
            break;
        }
    }

    return 0;
}