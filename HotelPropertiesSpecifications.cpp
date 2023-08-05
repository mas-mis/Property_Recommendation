#include "HotelPropertiesList.h"
#include "HotelPropertiesSpecifications.h"
#include "PropertyList.h"
#include <iostream>

void HotelSpecifications::getHotelListSpecifications () {
    Hotel *h;
    h = AllHotels;
    int n = 0;
    for (int i = 0; i < sizeof(AllHotels)/sizeof(AllHotels[0]); i++)
    {
        std::cout<<h->Hotel_Index<<" "<<h->Hotel_Name<<std::endl<<"Key Specifications:"<<std::endl;
        std::cout<<h->Spec1<<std::endl;
        std::cout<<h->Spec2<<std::endl;
        std::cout<<h->Spec3<<std::endl;
        std::cout<<h->Spec4<<std::endl;
        std::cout<<h->Spec5<<std::endl;
        std::cout<<std::endl;
        n = n + 1;
        h = h+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}