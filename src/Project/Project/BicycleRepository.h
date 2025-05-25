/**
 * Project Untitled
 */


#ifndef _BICYCLEREPOSITORY_H
#define _BICYCLEREPOSITORY_H

#include <vector>
#include <algorithm>
#include "Bicycle.h"

class BicycleRepository 
{
private: 
    std::vector<Bicycle*> bicycleList;
    static bool compare(Bicycle* a, Bicycle* b);

public: 
    
    /**
     * @param bicycle
     */
    void save(Bicycle* bicycle);
        
    /**
     * @param id
     */
    Bicycle* findById(std::string id) const;

};

#endif //_BICYCLEREPOSITORY_H