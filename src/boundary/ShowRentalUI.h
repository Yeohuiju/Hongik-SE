/**
 * Project Untitled
 */


#ifndef _SHOWRENTALUI_H
#define _SHOWRENTALUI_H

class ShowRentalUI {
public: 
    
/**
 * @param out_fp
 */
void ShowRentalUI(ofstream& out_fp);
    
/**
 * @param info
 */
void startInterface(string info);
private: 
    ofstream& out_fp;
};

#endif //_SHOWRENTALUI_H