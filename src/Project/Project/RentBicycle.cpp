#include "RentBicycle.h"

/*
    함수 이름 : RentBicycle::RentBicycle()
    기능      : RentBicycle 객체 생성
    전달 인자 : userSession -> 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조, bicycleRepository -> 전체 Bicycle을 관리하는 BicycleRepository 객체 참조,
                in_fp -> 입력 파일 스트림 참조, out_fp -> 출력 파일 스트림 참조
    반환값    : 없음
*/
RentBicycle::RentBicycle(UserSession* userSession, BicycleRepository* bicycleRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userSession(userSession), bicycleRepository(bicycleRepository), rentBicycleUI(in_fp, out_fp) { }

/*
    함수 이름 : RentBicycle::getRentBicycleUI()
    기능      : boundary 클래스 참조 반환
    전달 인자 : 없음
    반환값    : RentBicycleUI* -> boundary 클래스 참조
*/
RentBicycleUI* RentBicycle::getRentBicycleUI()
{
    return &rentBicycleUI;
}

/*
    함수 이름 : RentBicycle::rentBicycle()
    기능      : 입력한 id를 갖는 자전거를 현재 로그인한 사용자가 대여함으로 처리
    전달 인자 : id -> 대여할 자전거 id
    반환값    : string -> 대여한 자전거 정보(ID + 제품명)
*/
std::string RentBicycle::rentBicycle(std::string id) {
    Bicycle* bicycle = bicycleRepository->findById(id);     // 대여할 자전거 id로 검색
    bicycle->setAvailable(false);       // 대여 불가(대여 중) 상태로 설정

    Member* member = (Member*)(userSession->getCurrentUser());      // 현재 로그인한 회원 확인

    Rental* rental = new Rental(member, bicycle);       // 대여 정보(Rental) 생성
    (member->getRentalList())->addRental(rental);       // 현재 로그인한 회원의 대여 정보 리스트에 추가

    return "> " + bicycle->getInfo() + "\n";
}

/*
    함수 이름 : RentBicycle::execute()
    기능      : 현재 로그인한 사용자가 회원인 경우 초기 시스템 응답 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void RentBicycle::execute() {
    if (!userSession->isAdmin())        // 현재 로그인한 사용자가 회원인 경우
    {
        rentBicycleUI.startInterface();
    }
}