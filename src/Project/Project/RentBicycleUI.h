/**
 * Project Untitled
 */


#ifndef _RENTBICYCLEUI_H
#define _RENTBICYCLEUI_H

#include <fstream>

class RentBicycle;

class RentBicycleUI 
{
private:
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param in_fp
     * @param out_fp
     */
    RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);
    
    void startInterface();
    
    /**
     * @param control
     */
    void inputInfo(RentBicycle* control);

};

#endif //_RENTBICYCLEUI_H