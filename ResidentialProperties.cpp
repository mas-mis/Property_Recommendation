#include <iostream>
#include "PropertyList.h"
#include "ResidentialProperties.h"

Property::Property (int i, std::string PT, std::string add, char bor,int bhk, int p, float L, float NM, float NT, float NS, char PG) {
        this->House_Index = i;
        this->PropertyType = PT;
        this->House_Address = add;
        this->BOR = bor;
        this->BHK = bhk;
        this->Price = p;
        this->Locality = L;
        this->NearMarket = NM;
        this->NearTransport = NT;
        this->NearSchool = NS;
        this->PrivateGarden = PG;
        this->PropertyType = "Residence");
    }


void Property::getInfo () {
    Property *p;
    p = this;
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        std::cout<<p->House_Index<<" "<<p->House_Address<<" "<<p->BOR<<std::endl;
        n++;
        p = p+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
};

void Property::getResidencewithAvailability (char bor) {
    Property *p4;
    p4 = &AllProperties[0];
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        if (p4->BOR == bor)
        {
            std::cout<<p4->House_Index<<" "<<p4->House_Address<<" "<<p4->BOR<<std::endl;
            n++;
        }
        p4 = p4+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

void Property::getResidencewithBHK (int bhk) {
    Property *p3;
    p3 = &AllProperties[0];
    int n = 0;
    for (int i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        if (p3->BHK == bhk)
        {
            std::cout<<p3->House_Index<<" "<<p3->House_Address<<" "<<p3->BOR<<std::endl;
            n++;
        }
        p3 = p3+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

bool Property::isResidencewithAvailability (char bor) {
    if (this->BOR == bor)
    {
        return true;
    }
    else {
        return false;
    }
}

bool Property::isResidencewithBHK (int bhk) {
    if (this->BHK == bhk)
    {
        return true;
    }
    else {
        return false;
    }
}

void Property::getReccomendation (char A, int BHK, int Budget, int perks[]) {
    Property *R;
    R = AllProperties;
    int i = 0;
    int num;
    int n = 0;
    for (i = 0; i < sizeof(AllProperties)/sizeof(AllProperties[0]); i++)
    {
        if (R->isResidencewithAvailability(A))
        {   
            goto a;
        }
        r:
        for (int k = 0; k < 1; k++)
        {
        }
        R = R + 1;
    }
    goto d;
    a:
    if (R->isResidencewithBHK(BHK))
    {
        goto b;
    }
    else {
        goto r;
    }
    
    b:
    if (R->Price<=Budget)
    {
        goto c;
    }
    else {
        goto r;
    }
    c:
    num = 0;
    
        for (int j = 3; j >= 0; j--)
        {
            if (perks[j] == 1)
            {
                if (R->Locality <= perks[j]+1 || R->Locality >= perks[j]-1)
                {
                    num = num + 1;
                    break;           
                }
            }
        }
        for (int j = 3; j >= 0; j--)
        {
            if (perks[j] == 2)
            {
                if (R->Locality <= perks[j]+1 || R->Locality >= perks[j]-1)
                {
                    num = num + 1;
                    break;           
                }
            }
        }
        for (int j = 3; j >= 0; j--)
        {
            if (perks[j] == 3)
            {
                if (R->Locality <= perks[j]+1 || R->Locality >= perks[j]-1)
                {
                    num = num + 1;
                    break;           
                }
            }
        }
        for (int j = 3; j >= 0; j--)
        {
            if (perks[j] == 1)
            {
                if (R->Locality <= perks[j]+1 || R->Locality >= perks[j]-1)
                {
                    num = num + 1;
                    break;           
                }
            }
        }
        if(num >= 2){
            R->getPerk(i+1);
            n++;
            goto r;
        }
        else {
            goto r;
        }
        d:
        for (int k = 0; k < 1; k++)
        {
        }
        if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
        
};
