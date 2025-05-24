/**
 * Project Untitled
 */


#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

class LogoutUI {
public: 
    
/**
 * @param out_fp
 */
void LogoutUI(ofstream& out_fp);
    
/**
 * @param id
 */
void startInterface(string id);
private: 
    ofstream& out_fp;
};

#endif //_LOGOUTUI_H