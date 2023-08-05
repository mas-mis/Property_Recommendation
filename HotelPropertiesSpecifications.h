#pragma once

#ifndef HotelPropertiesSpecifications_H_
#define HotelPropertiesSpecifications_H_

#include "HotelPropertiesList.h"
#include <string>

class HotelSpecifications:public HotelList {
    protected:
    float Rating;
    std::string Spec1;
    std::string Spec2;
    std::string Spec3;
    std::string Spec4;
    std::string Spec5;

    public:
    void getHotelListSpecifications();
};


#endif