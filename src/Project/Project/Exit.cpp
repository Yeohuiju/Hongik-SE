#include "Exit.h"

/*
	함수 이름 : Exit::Exit()
	기능	 : Exit 객체 생성
	전달 인자 : in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
	반환값	 : 없음
*/
Exit::Exit(std::ifstream& in_fp, std::ofstream& out_fp) : exitUI(out_fp), in_fp(in_fp), out_fp(out_fp) { }

/*
	함수 이름 : Exit::execute()
	기능	 : 종료 기능 수행. 시스템 응답 출력 및 입출력 파일 스트림 닫기
	전달 인자 : 없음
	반환값 	 : 없음
*/
void Exit::execute()
{
	exitUI.startInterface();	// 시스템 응답 출력

	in_fp.close();		// 입력 파일 스트림 닫기
	out_fp.close();		// 출력 파일 스트림 닫기
}