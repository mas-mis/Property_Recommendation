#pragma once

#ifndef HotelProperties_H_
#define HotelProperties_H_
#include "HotelPropertiesList.h"
#include "HotelPropertiesSpecifications.h"

class Hotel:public HotelSpecifications {
    public:
    Hotel(int HI, std::string HN, std::string HA, int P, float R, std::string S1, std::string S2, std::string S3, std::string S4, std::string S5);
    void getHotelunderPrise (int Budget);
    void getHotelInfo (int Index);
    
};

#endif
