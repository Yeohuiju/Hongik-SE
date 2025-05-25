#include "RegisterUser.h"

/*
    함수 이름 : RegisterUser::RegisterUser()
    기능      : RegisterUser 객체 생성
    전달 인자 : userRepository -> 전체 User를 관리하는 UserRepository 객체 참조,in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
    반환값    : 없음
*/
RegisterUser::RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), registerUserUI(in_fp, out_fp) { }

/*
    함수 이름 ; RegisterUser::getRegisterUserUI()
    기능      : boundary 클래스 참조 반환
    전달 인자 : 없음
    반환값    : RegisterUserUI* -> boundary 클래스 참조
*/
RegisterUserUI* RegisterUser::getRegisterUserUI()
{
    return &registerUserUI;
}

/*
    함수 이름 : RegisterUser::registerUser()
    기능      : 입력한 정보로 새로운 회원 객체 생성 및 저장
    전달 인자 : id -> 사용자 ID, pwd -> 사용자 비밀번호, phoneNumber -> 전화번호
    반환값    : string -> 새로 가입한 사용자의 정보(ID + 비밀번호 + 전화번호)
*/
std::string RegisterUser::registerUser(std::string id, std::string pwd, std::string phoneNumber) {
    Member* member = new Member(id, pwd, phoneNumber);      // 새로운 Member 객체 생성
    this->userRepository->save(member);     // 새로운 Member 객체 참조 저장

    return "> " + member->getId() + " " + member->getPwd() + " " + member->getPhoneNumber() + "\n";
}

/* 
    함수 이름 : RegisterUser::execute() 
    기능      : 회원가입 기능 수행. 초기 시스템 응답 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void RegisterUser::execute() 
{
    registerUserUI.startInterface();
}