#include <iostream>
#include "PlotProperties.h"
#include "PropertyList.h"

Plot::Plot (int i, int P, float A, std::string Add) {
        this->Plot_Index = i;
        this->Prise = P;
        this->Area = A;
        this->Address = Add;
        this->PropertyType = "Plot");
    }

void Plot::getPlotDetails () {
    Plot *p;
    p = AllPlots;
    int n = 0;
    for (int i = 0; i < sizeof(AllPlots)/sizeof(AllPlots[0]); i++)
    {
        std::cout<<p->Plot_Index<<" "<<p->Address<<" "<<p->Area<<" "<<p->Prise<<std::endl;
        n = n + 1;
        p = p+1;
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}

void Plot::getPlotUnderPrise (int P) {
    Plot *p;
    p = AllPlots;
    int n = 0;
    for (int i = 0; i < sizeof(AllPlots)/sizeof(AllPlots[0]); i++)
    {
        if (p->Prise <= P)
        {
            std::cout<<p->Plot_Index<<" "<<p->Address<<" "<<p->Area<<" "<<p->Prise<<std::endl;
            n++;
            p = p+1;
        }
    }
    if (n == 0)
        {
            std::cout<<"No Property Found"<<std::endl<<std::endl;
        }
}
