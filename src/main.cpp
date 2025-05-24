// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "../resources/input.txt"
#define OUTPUT_FILE_NAME "../resources/output.txt"

// 함수 선언
void doTask();
void program_exit();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    if (!in_fp.is_open()) {
        cerr << "입력 파일을 열 수 없습니다." << endl;
        return 1;
    }
    if (!out_fp.is_open()) {
        cerr << "출력 파일을 열 수 없습니다." << endl;
        return 1;
    }

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

    while(!is_program_exit)
    {
    // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 1:
            {
                switch(menu_level_2)
                {
                    case 1: {
                        // 해당 기능 수행
                        break;
                    }
                    case 2: {

                    }
                }
            }
            case 7:
            {
                switch(menu_level_2)
                {
                    case 1: // "6.1. 종료“ 메뉴 부분
                    {
                        is_program_exit = 1;
                        break;
                    }
                }
            }
        }
    }
}