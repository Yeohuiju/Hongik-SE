#ifndef _USERREPOSITORY_H
#define _USERREPOSITORY_H

#include <vector>
#include <algorithm>
#include "User.h"

// 전체 User 객체를 관리하는 UserRepository 클래스 정의
class UserRepository 
{
private: 
    std::vector<User*> userList;            // User 객체 벡터
    static bool compare(User* a, User* b);  // 정렬을 위한 비교 함수

public: 
    void save(User* user);                  // 새로운 User 객체를 벡터에 추가
    User* findById(std::string id) const;   // 전달받은 id를 id로 가지는 User 객체 반환
};

#endif //_USERREPOSITORY_H