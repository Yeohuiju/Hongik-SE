#include "ShowRental.h"

/*
	함수 이름 : ShowRental::ShowRental()
	기능	  : ShowRental 객체 생성
	전달 인자 : userSession -> 현재 로그인한 User 정보를 가지고 있는 UserSession 객체 참조, out_fp -> 출력 파일 스트림 참조
    반환값    : 없음
*/
ShowRental::ShowRental(UserSession* userSession, std::ofstream& out_fp) : userSession(userSession), showRentalUI(out_fp) { }

/*
	함수 이름 : ShowRental::execute() 
	기능	  : 현재 로그인한 사용자의 대여 정보 리스트 조회
	전달 인자 : 없음
	반환값    : 없음
*/
void ShowRental::execute() 
{
	if (!userSession->isAdmin())	// 현재 로그인한 사용자가 회원인 경우
	{
		Member* member = (Member*)userSession->getCurrentUser();		// 현재 로그인한 사용자 확인
		RentalList* rentalList = member->getRentalList();				// 현재 사용자의 대여 정보 리스트 확인

		std::string rentalInfo = "";

		/*
		대여 정보 리스트의 모든 자전거의 정보 조회
		*/
		for (Rental* rental : rentalList->getRentalList())
		{
			Bicycle* bicycle = rental->getBicycle();
			rentalInfo += "> " + bicycle->getInfo() + "\n";
		}

		showRentalUI.startInterface(rentalInfo);
	}
}