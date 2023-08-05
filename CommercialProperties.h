#pragma once
#ifndef CommercialProperties_H_
#define CommercialProperties_H_

#include "CommercialPropertiesType.h"
#include "PropertyType.h"
#include <string>
class Commercial:public CommercialType {
    protected:
    int C_Index;

    std::string C_Address;
    char C_Availability;
    int C_Prise;

    public:
    Commercial (int CI, std::string BT, std::string CA, char CAv, int CP);
    void getBuildingType ();
    void getCommercialProperty (int B_Index);
    void getAllCommercialProperty ();
};



#endif
