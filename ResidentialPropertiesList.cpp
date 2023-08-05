#include <iostream>
#include "ResidentialPropertiesList.h"
#include "PropertyList.h"

void PropertyType::getPropertyType () {
    PropertyList *p;
    p = AllProperties;
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        std::cout<<p->House_Index<<" "<<p->House_Address<<" is of type: "<<p->PropertyType<<std::endl;
        n++;
        p = p+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

void PropertyList::getPropertyListInfo () {
    PropertyList *p;
    p = this;
    int n = 0;

    for(int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]);i++) {
    std::cout<<p->House_Index<<" "<<p->House_Address<<std::endl;
    n++;
    p = p+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
};

void PropertyList::getAvailabilityInfo () {
        Property *p1 = static_cast<Property *>(p1);
        // p1 = ;
                p1 = &AllProperties[0];

        int n = 0;
        for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
        {
            if (p1->BOR == 'B')
            {
                std::cout<<p1->House_Index<<" for buying"<<std::endl;
                n++;
            }
            else if (p1->BOR == 'R')
            {
                std::cout<<p1->House_Index<<" for rent"<<std::endl;
                n++;
            }
            p1 = p1 + 1;
        }
        if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
};

void PropertyList::getPrice () {
    Property *p2 = static_cast<Property *>(p2);
    p2 = AllProperties ;
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        if (p2->BOR == 'B') {
            std::cout<<p2->House_Index<<" for sale for price "<<p2->Price<<std::endl;
            n++;
        }
        if (p2->BOR == 'R') {
            std::cout<<p2->House_Index<<" for rent for price "<<p2->Price<<" per month"<<std::endl;
            n++;
        }
        p2 = p2 + 1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
};
