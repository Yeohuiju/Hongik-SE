/**
 * Project Untitled
 */


#ifndef _REGISTERUSERUI_H
#define _REGISTERUSERUI_H

#include <fstream>
#include "../control/RegisterUser.h"

class RegisterUserUI 
{
private: 
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param in_fp
     * @param out_fp
     */
    RegisterUserUI(std::ifstream& in_fp, std::ofstream& out_fp);
        
    void startInterface();
        
    /**
     * @param control
     */
    void inputInfo(RegisterUser* control);
};

#endif //_REGISTERUSERUI_H