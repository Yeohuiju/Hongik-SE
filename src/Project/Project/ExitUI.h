/**
 * Project Untitled
 */


#ifndef _EXITUI_H
#define _EXITUI_H

#include <fstream>

class ExitUI 
{
private:
    std::ofstream& out_fp;

public: 
    
    /**
     * @param out_fp
     */
    ExitUI(std::ofstream& out_fp);
    
    void startInterface();
};

#endif //_EXITUI_H