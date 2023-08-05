#include <iostream>
#include "HotelProperties.h"
#include "PropertyList.h"

void HotelList::getHotelList () {
    Hotel *h;
    h = AllHotels;
    int n = 0;
    for (int i = 0; i < sizeof(AllHotels)/sizeof(AllHotels[0]); i++)
    {
        std::cout<<h->Hotel_Index<<" "<<h->Hotel_Name<<std::endl<<"Address: "<<h->Hotel_Address<<std::endl;
        n++;
        h = h+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}