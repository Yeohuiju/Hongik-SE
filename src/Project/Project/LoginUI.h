/**
 * Project Untitled
 */


#ifndef _LOGINUI_H
#define _LOGINUI_H

#include <fstream>

class Login;

class LoginUI 
{
private:
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param in_fp
     * @param out_fp
     */
    LoginUI(std::ifstream& in_fp, std::ofstream& out_fp);
    
    void startInterface();
    
    /**
     * @param control
     */
    void inputInfo(Login* control);
};

#endif //_LOGINUI_H