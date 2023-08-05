#pragma once

#ifndef ResidentialPropertiesPerks_H_
#define ResidentialPropertiesPerks_H_

#include "PropertyType.h"
#include "ResidentialPropertiesList.h"

#include <string>

class Perks:public PropertyList {
    protected:
    float Locality;
    float NearMarket;
    float NearTransport;
    float NearSchool;
    char PrivateGarden;
    
    public:
    void getPerks ();
    void getPerk (int Index);

};
#endif