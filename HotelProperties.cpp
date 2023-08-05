#include "HotelPropertiesList.h"
#include "HotelPropertiesSpecifications.h"
#include "HotelProperties.h"
#include "PropertyList.h"
#include <iostream>

Hotel::Hotel(int HI, std::string HN, std::string HA, int P, float R, std::string S1, std::string S2, std::string S3, std::string S4, std::string S5) {
        this->Hotel_Index = HI;
        this->Hotel_Name = HN;
        this->Hotel_Address = HA;
        this->Prises = P;
        this->Rating = R;
        this->Spec1 = S1;
        this->Spec2 = S2;
        this->Spec3 = S3;
        this->Spec4 = S4;
        this->Spec5 = S5;
        this->PropertyType = "Hotel");
    }

void Hotel::getHotelunderPrise (int Budget) {
    Hotel *h;
    h = AllHotels;
    int n = 0;
    for (int i = 0; i < sizeof(AllHotels)/sizeof(AllHotels[0]); i++)
    {
        if (h->Prises < Budget)
        {
            h->getHotelInfo (i+1);
            n = n + 1;
        }
        h = h + 1;
    }
        if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

void Hotel::getHotelInfo (int Index) {
    Hotel *h1;
    h1 = AllHotels;
    int n = 0;
    for (int i = 0; i < sizeof(AllHotels)/sizeof(AllHotels[0]); i++)
    {
        if (h1->Hotel_Index == Index) {
        std::cout<<h1->Hotel_Index<<" "<<h1->Hotel_Name<<std::endl;
        std::cout<<"Address: "<<h1->Hotel_Address<<std::endl;
        std::cout<<"Key Specifications:"<<std::endl;
        std::cout<<h1->Spec1<<std::endl;
        std::cout<<h1->Spec2<<std::endl;
        std::cout<<h1->Spec3<<std::endl;
        std::cout<<h1->Spec4<<std::endl;
        std::cout<<h1->Spec5<<std::endl;
        std::cout<<std::endl;
        n++;
        break;
        }
        h1 = h1+1;
    }
}
