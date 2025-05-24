/**
 * Project Untitled
 */


#ifndef _RENTBICYCLEUI_H
#define _RENTBICYCLEUI_H

class RentBicycleUI {
public: 
    
/**
 * @param in_fp
 * @param out_fp
 */
void RentBicycleUI(ifstream& in_fp, ofstream& out_fp);
    
void startInterface();
    
/**
 * @param control
 */
void inputInfo(RentBicycle* control);
private: 
    ifstream& in_fp;
    ofstream& out_fp;
};

#endif //_RENTBICYCLEUI_H