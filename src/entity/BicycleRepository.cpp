/**
 * Project Untitled
 */


#include "BicycleRepository.h"

/**
 * BicycleRepository implementation
 */


/**
 * @param bicycle
 */
void BicycleRepository::save(Bicycle* bicycle) 
{
    bicycleList.push_back(bicycle);
    sort(bicycleList.begin(), bicycleList.end(), compare);
}

/**
 * @param id
 * @return Bicycle*
 */
Bicycle* BicycleRepository::findById(std::string id) const 
{

    for (Bicycle* bicycle : bicycleList) 
    {
        if (bicycle->getId() == id) 
        {
            return bicycle;
        }
    }

    return nullptr;
}

bool BicycleRepository::compare(Bicycle* a, Bicycle* b)
{
    return a->getId() < b->getId();
}