/**
 * Project Untitled
 */


#ifndef _LOGINUI_H
#define _LOGINUI_H

class LoginUI {
public: 
    
/**
 * @param in_fp
 * @param out_fp
 */
void LoginUI(ifstream& in_fp, ofstream& out_fp);
    
void startInterface();
    
/**
 * @param control
 */
void inputInfo(Login* control);
private: 
    ifstream& in_fp;
    ofstream& out_fp;
};

#endif //_LOGINUI_H