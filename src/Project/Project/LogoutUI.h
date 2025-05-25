/**
 * Project Untitled
 */


#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include <fstream>

class Logout;

class LogoutUI 
{
private:
    std::ofstream& out_fp;

public: 
    
    /**
     * @param out_fp
     */
    LogoutUI(std::ofstream& out_fp);
    
    /**
     * @param id
     */
    void startInterface(std::string id);

};

#endif //_LOGOUTUI_H