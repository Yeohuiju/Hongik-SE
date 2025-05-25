/**
 * Project Untitled
 */


#ifndef _REGISTERBICYCLEUI_H
#define _REGISTERBICYCLEUI_H

#include <fstream>

class RegisterBicycle;

class RegisterBicycleUI 
{
private:
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param in_fp
     * @param out_fp
     */
    RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);
    
    void startInterface();
    
    /**
     * @param control
     */
    void inputInfo(RegisterBicycle* control);

};

#endif //_REGISTERBICYCLEUI_H