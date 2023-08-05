#pragma once

#ifndef ResidentialPropertiesList_H_
#define ResidentialPropertiesList_H_

#include "PropertyType.h"

#include <string>

class PropertyList:public PropertyType {
    friend class PropertyType;
    protected:
    int House_Index;
    std::string House_Address;
    char BOR;
    int BHK;
    int Price;

    public:
    void getPropertyListInfo ();
    void getAvailabilityInfo ();
    void getPrice();

};




#endif
