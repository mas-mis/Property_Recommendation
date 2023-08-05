#include <iostream>
#include "PropertyList.h"
#include "ResidentialPropertiesPerks.h"
#include "ResidentialProperties.h"

void Perks::getPerks () {
    Perks *p;
    p = AllProperties;
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        std::cout<<p->House_Index<<" "<<p->House_Address<<std::endl;
        std::cout<<"**************************"<<std::endl<<"Ratings:-"<<std::endl;
        std::cout<<"Locality: "<<p->Locality<<std::endl;
        std::cout<<"NearMarket: "<<p->NearMarket<<std::endl;
        std::cout<<"NearTransportation: "<<p->NearTransport<<std::endl;
        std::cout<<"NearSchool: "<<p->NearSchool<<std::endl;
        std::cout<<"PrivateGarden: "<<p->PrivateGarden<<std::endl;
        std::cout<<std::endl;
        n++;
        p = p + 1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
    
}

void Perks::getPerk (int i) {
    Property *p5 = &AllProperties[i-1];
        std::cout<<p5->House_Index<<" "<<p5->House_Address<<std::endl;
        std::cout<<"**************************"<<std::endl<<"Ratings:-"<<std::endl;
        std::cout<<"Locality: "<<p5->Locality<<std::endl;
        std::cout<<"NearMarket: "<<p5->NearMarket<<std::endl;
        std::cout<<"NearTransportation: "<<p5->NearTransport<<std::endl;
        std::cout<<"NearSchool: "<<p5->NearSchool<<std::endl;
        std::cout<<"PrivateGarden: "<<p5->PrivateGarden<<std::endl;
        std::cout<<std::endl;
}
