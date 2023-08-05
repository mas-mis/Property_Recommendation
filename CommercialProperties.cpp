#include <iostream>
#include "CommercialPropertiesType.h"
#include "CommercialProperties.h"
#include "PropertyList.h"

Commercial::Commercial (int CI, std::string BT, std::string CA, char CAv, int CP) {
        this->C_Index = CI;
        this->Building_Type = BT;
        this->C_Address = CA;
        this->C_Availability = CAv;
        this->C_Prise = CP;
        this->PropertyType = "Commercial");
    }

void Commercial::getBuildingType () {
    Commercial *C;
    C = AllCommercialTypes;
    for (int i = 0; i < sizeof(AllCommercialTypes)/sizeof(AllCommercialTypes[0]); i++)
    {
        std::cout<<C->Building_Type<<std::endl;
        C = C+1;
    }
}

void Commercial::getCommercialProperty (int B_Index) {
    Commercial *C;
    C = AllCommercial;
    int n = 0;
    
        for (int i = 0; i < sizeof(AllCommercial)/sizeof(AllCommercial[0]); i++)
        {
            switch (B_Index) {
                case 1: {
                    if (C->Building_Type == "Building") {
                        std::cout<<C->C_Index<<" "<<C->C_Address<<" "<<C->C_Availability<<" "<<C->C_Prise<<std::endl;
                        n++;
                        break;
                    }
                    break;
                }
                case 2: {
                    if (C->Building_Type == "Single Floor") {
                        std::cout<<C->C_Index<<" "<<C->C_Address<<" "<<C->C_Availability<<" "<<C->C_Prise<<std::endl;
                        n++;
                        break;
                    }
                    break;
                }
            }
            C = C + 1;
        }
        if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

void Commercial::getAllCommercialProperty () {
    Commercial *C;
    C = AllCommercial;
    int n = 0;
        for (int i = 0; i < sizeof(AllCommercial)/sizeof(AllCommercial[0]); i++)
        {
            std::cout<<C->C_Index<<" "<<C->Building_Type<<" "<<C->C_Address<<" "<<C->C_Availability<<" "<<C->C_Prise<<std::endl; 
            C = C + 1; 
            n++;  
        }
        if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}
