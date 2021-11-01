#include "Message/Device.hpp"

Device::~Device() //destructor
{
    if (pins == nullptr) //delete pins table
    {
        delete[] pins;
        pins = nullptr;
    }
}

//getter and setter of devType variable
void Device::setDevType(uint16_t devType)
{
    this->devType = devType;
}

uint16_t Device::getDevType()
{
    if (devType != -1)
    {
        return devType;
    }
    else
    {
        //TODO: throw exception
    }
}

//getter and setter of ID variable
void Device::setID(uint8_t ID)
{
    this->ID = ID;
}

uint8_t Device::getID()
{
    if (ID != -1)
    {
        return ID;
    }
    else
    {
        //TODO: throw exception
    }
}

//getter and setter of table with pins
void Device::setPins(uint8_t *pins)
{
    this->pins = pins;
}

uint8_t *Device::getPinsPtr()
{
    if (pins != nullptr)
    {
        return pins;
    }
    else
    {
        //TODO: throw exception
    }
}
