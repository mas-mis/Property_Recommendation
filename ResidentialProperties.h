#pragma once

#ifndef ResidentialProperties_H_
#define ResidentialProperties_H_

#include "ResidentialPropertiesList.h"
#include "ResidentialPropertiesPerks.h"

#include <string>

class Property:public Perks {
    public:
     Property (int i, std::string PT, std::string add, char bor,int bhk, int p, float L, float NM, float NT, float NS, char PG) ;
    void getInfo () ;
    void getResidencewithAvailability (char bo);
    void getResidencewithBHK (int bhk);
    bool isResidencewithAvailability (char bo);
    bool isResidencewithBHK (int bhk) ;
    void getReccomendation (char A, int BHK, int Budget, int perks[]);
};

#endif
