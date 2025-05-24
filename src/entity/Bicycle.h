/**
 * Project Untitled
 */


#ifndef _BICYCLE_H
#define _BICYCLE_H

#include <string>

class Bicycle 
{
private: 
    std::string id;
    std::string name;
    bool isAvailable;

public: 
        
    /**
     * @param id
     * @param name
     */
    Bicycle(std::string id, std::string name);
    std::string getId() const;
    void setAvailable(bool isAvailable);
    std::string getInfo() const;

};

#endif //_BICYCLE_H