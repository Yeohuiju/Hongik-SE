/**
 * Project Untitled
 */


#ifndef _BICYCLEREPOSITORY_H
#define _BICYCLEREPOSITORY_H

class BicycleRepository {
public: 
    
/**
 * @param bicycle
 */
void save(Bicycle* bicycle);
    
/**
 * @param id
 */
Bicycle* findById(String id);
private: 
    vector<Bicycle> bicycleList;
};

#endif //_BICYCLEREPOSITORY_H