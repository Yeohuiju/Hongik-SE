/**
 * Project Untitled
 */


#include "Bicycle.h"

/**
 * Bicycle implementation
 */


/**
 * @param id
 * @param name
 */
Bicycle::Bicycle(std::string id, std::string name) : id(id), name(name) { }

std::string Bicycle::getId() const
{
    return id;
}

void Bicycle::setAvailable(bool isAvailable)
{
    this->isAvailable = isAvailable;
}

/**
 * @return string
 */
std::string Bicycle::getInfo() const
{
    return id + " " + name;
}