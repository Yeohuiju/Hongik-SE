/**
 * Project Untitled
 */


#include "Login.h"

/**
 * Login implementation
 */


/**
 * @param userRepository
 * @param userSession
 * @param in_fp
 * @param out_fp
 */
Login::Login(UserRepository* userRepository, UserSession* userSession, std::ifstream& in_fp, std::ofstream& out_fp) : userRepository(userRepository), userSession(userSession), loginUI(in_fp, out_fp) { }

LoginUI* Login::getLoginUI()
{
    return &loginUI;
}
/**
 * @param id
 * @param pwd
 * @return string
 */
std::string Login::login(std::string id, std::string pwd) 
{
    User* user = userRepository->findById(id);

    if (user->getPwd() == pwd)
    {
        userSession->login(user);
    }

    return "> " + user->getId() + " " + user->getPwd() + "\n";
}

void Login::execute() 
{
    loginUI.startInterface();
}