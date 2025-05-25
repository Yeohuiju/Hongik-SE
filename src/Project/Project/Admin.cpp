#include "Admin.h"

/*
    함수 이름 : Admin::Admin()
    기능     : Admin 객체 생성
    전달 인자 : id -> 아이디, pwd -> 비밀번호
    반환값   : 없음
*/
Admin::Admin(std::string id, std::string pwd) : User(id, pwd) { }