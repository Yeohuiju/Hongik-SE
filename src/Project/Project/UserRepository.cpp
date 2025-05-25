#include "UserRepository.h"

/*
    함수 이름 : UserRepository::save()
    기능      : 새로운 User 객체의 포인터를 userList 벡터에 추가
    전달 인자 : user -> 추가할 User 객체 포인터
    반환값    : 없음
*/
void UserRepository::save(User* user) 
{
    userList.push_back(user);       // userList 벡터에 추가
    std::sort(userList.begin(), userList.end(), &compare);      // User 객체의 id 값을 기준으로 정렬
}

/*
    함수 이름 : UserRepository::findById()
    기능      : 특정 id의 User 객체를 찾아 해당 객체 포인터 반환
    전달 인자 : id -> 찾고자 하는 User 객체의 id
    반환값    : User* -> 전달 받은 id의 User 객체 포인터
*/
User* UserRepository::findById(std::string id) const
{
    /*
    동일한 id를 가진 User 객체를 찾을 때까지 전체 User 객체에 대해 반복
    */
    for (User* user : userList) 
    {
        if (user->getId() == id)    // 동일한 id의 User
        {
            return user;
        }
    }

    return nullptr;
}

/*
    함수 이름 : UserRepository::compare()
    기능     : 정렬을 위한 비교함수로 User 객체의 id 값을 기준으로 정렬
    전달 인자 : a -> 비교할 첫 번째 User 객체 참조, b -> 비교할 두 번째 User 객체 참조
    반환값   : bool -> true: a가 더 작음, false : b가 더 작음
*/
bool UserRepository::compare(User* a, User* b)
{
    return a->getId() < b->getId();
}