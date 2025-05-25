#include "Login.h"

/*
    함수 이름 : Login::Login()
    기능     : Login 객체 생성
    전달 인자 : userRepository -> 전체 User를 관리하는 UserRepository 객체 참조, userSession -> 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조,
              in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
    반환값   : 없음
*/
Login::Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), userSession(userSession), loginUI(in_fp, out_fp) { }

/*
    함수 이름 : Login::getLoginUI()
    기능     : boundary 클래스 참조 반환
    전달 인자 : 없음
    반환값   : LoginUI* -> boundary 클래스 참조
*/
LoginUI* Login::getLoginUI()
{
    return &loginUI;
}

/*
    함수 이름 : Login::login()
    기능     : 입력한 정보에 해당하는 사용자로 로그인
    전달 인자 : id -> 사용자 ID, pwd -> 사용자 비밀번호
    반환값   : string -> 로그인한 사용자의 ID와 비밀번호
*/
std::string Login::login(std::string id, std::string pwd)
{
    User* user = userRepository->findById(id);      // 입력한 id의 User 검색

    if (user->getPwd() == pwd)      // 비밀번호가 일치할 경우
    {
        userSession->login(user);   // 현재 사용자로 입력한 정보의 사용자 참조 입력
    }

    return "> " + user->getId() + " " + user->getPwd() + "\n";
}

/*
    함수 이름 : Login::execute()
    기능     : 로그인 기능을 수행. 초기 시스템 응답 출력
    전달 인자 : 없음
    반환값   : 없음
*/
void Login::execute()
{
    loginUI.startInterface();
}