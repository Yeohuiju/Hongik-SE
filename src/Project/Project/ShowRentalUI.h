/**
 * Project Untitled
 */


#ifndef _SHOWRENTALUI_H
#define _SHOWRENTALUI_H

#include <fstream>

class ShowRentalUI 
{
private:
    std::ofstream& out_fp;

public: 
    
    /**
     * @param out_fp
     */
    ShowRentalUI(std::ofstream& out_fp);
    
    /**
     * @param info
     */
    void startInterface(std::string info);

};

#endif //_SHOWRENTALUI_H