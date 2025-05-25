#include "RegisterBicycle.h"

/*
    함수 이름 : RegisterBicycle::RegisterBicycle()
    기능      : RegisterBicycle 객체 생성
    전달 인자 : userSession -> 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조, bicycleRepository -> 전체 Bicycle을 관리하는 BicycleRepository 객체 참조,
              in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
    반환값   : 없음
*/
RegisterBicycle::RegisterBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), registerBicycleUI(in_fp, out_fp) { }

/*
    함수 이름 : RegisterBicycle::getRegisterBicycleUI()
    기능      : boundary 클래스 참조 반환
    전달 인자 : 없음
    반환값    : RegisterBicycleUI* -> boundary 클래스 참조
*/
RegisterBicycleUI* RegisterBicycle::getRegisterBicycleUI()
{
    return &registerBicycleUI;
}

/*
    함수 이름 : RegisterBicycle::registerBicycle()
    기능      : 새로운 자전거 정보를 입력받아 새 자전거 객체 생성 및 저장
    전달 인자 : id -> 자전거 ID, name -> 자전거 제품명
    반환값    : 생성한 자전거 정보(자전거 ID + 전화번호)
*/
std::string RegisterBicycle::registerBicycle(std::string id, std::string name) {
    Bicycle* bicycle = new Bicycle(id, name);       // 새로운 Bicycle 객체 생성
    bicycleRepository->save(bicycle);               // bicycleRepository에 새로운 Bicycle 객체 참조 저장

    return "> " + bicycle->getInfo() + "\n";
}

/*
    함수 이름 : RegisterBicycle::execute()
    기능      : 저전거 등록 기능을 수행. 초기 시스템 응답 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void RegisterBicycle::execute() {
    if (userSession->isAdmin())     // 관리자로 로그인한 경우에만 등록 가능
    {
        registerBicycleUI.startInterface();     // "3.1. 자전거 등록" 출력
    }
}