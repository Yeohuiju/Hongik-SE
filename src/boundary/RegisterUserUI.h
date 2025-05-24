/**
 * Project Untitled
 */


#ifndef _REGISTERUSERUI_H
#define _REGISTERUSERUI_H

class RegisterUserUI {
public: 
    
/**
 * @param in_fp
 * @param out_fp
 */
void RegisterUserUI(ifstream in_fp, ofstream& out_fp);
    
void startInterface();
    
/**
 * @param control
 */
void inputInfo(RegisterUser* control);
private: 
    ifstream& in_fp;
    ofstream& out_fp;
};

#endif //_REGISTERUSERUI_H