#pragma once

#ifndef PlotProperties_H_
#define PlotProperties_H_

#include "PropertyType.h"

#include <string>

class Plot:public PropertyType {
    protected:
    int Plot_Index;
    int Prise;
    float Area;
    std::string Address;

    public:
    Plot (int i, int P, float A, std::string Add) ;
    void getPlotDetails ();
    void getPlotUnderPrise (int P);
};

#endif
