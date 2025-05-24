/**
 * Project Untitled
 */


#ifndef _REGISTERBICYCLEUI_H
#define _REGISTERBICYCLEUI_H

class RegisterBicycleUI {
public: 
    
/**
 * @param in_fp
 * @param out_fp
 */
void RegisterBicycleUI(ifstream& in_fp, ofstream& out_fp);
    
void startInterface();
    
/**
 * @param control
 */
void inputInfo(RegisterBicycle* control);
private: 
    ifstream& in_fp;
    ofstream& out_fp;
};

#endif //_REGISTERBICYCLEUI_H