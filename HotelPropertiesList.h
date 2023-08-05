#pragma once

#ifndef HotelPropertiesList_H_
#define HotelPropertiesList_H_

#include <string>

#include "PropertyType.h"

class HotelList:public PropertyType {
    protected:
    int Hotel_Index;
    std::string Hotel_Name;
    std::string Hotel_Address;
    int Prises;

    public:
    void getHotelList ();

};
#endif
