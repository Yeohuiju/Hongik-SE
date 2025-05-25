/**
 * Project Untitled
 */


#ifndef _EXIT_H
#define _EXIT_H

#include <fstream>
#include "ExitUI.h"

class Exit 
{
private:
    ExitUI exitUI;
    std::ifstream& in_fp;
    std::ofstream& out_fp;

public: 
    
    /**
     * @param out_fp
     */
    Exit(std::ifstream& in_fp, std::ofstream& out_fp);
    
    void execute();

};

#endif //_EXIT_H