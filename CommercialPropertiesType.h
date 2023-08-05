#pragma once
#ifndef CommercialPropertiesType_H_
#define CommercialPropertiesType_H_

#include "PropertyType.h"

#include <string>

class CommercialType:public PropertyType {
    protected:
    std::string Building_Type;
};
#endif
