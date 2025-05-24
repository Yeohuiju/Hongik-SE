/**
 * Project Untitled
 */


#ifndef _EXIT_H
#define _EXIT_H

class Exit {
public: 
    
/**
 * @param out_fp
 */
void Exit(ofstream& out_fp);
    
void execute();
private: 
    ExitUI exitUI;
};

#endif //_EXIT_H