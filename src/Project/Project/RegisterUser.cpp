/**
 * Project Untitled
 */


#include "RegisterUser.h"

/**
 * RegisterUser implementation
 */


/**
 * @param userRepository
 * @param in_fp
 * @param out_fp
 */
RegisterUser::RegisterUser(UserRepository* userRepository, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), registerUserUI(in_fp, out_fp) { }

RegisterUserUI* RegisterUser::getRegisterUserUI()
{
    return &registerUserUI;
}

/**
 * @param id
 * @param pwd
 * @param phoneNumber
 * @return string
 */
std::string RegisterUser::registerUser(std::string id, std::string pwd, std::string phoneNumber) {
    Member* member = new Member(id, pwd, phoneNumber);
    this->userRepository->save(member);

    std::string memberInfo = "> " + member->getId() + " " + member->getPwd() + " " + member->getPhoneNumber();
    return memberInfo;
}

void RegisterUser::execute() 
{
    registerUserUI.startInterface();
}