#pragma once
#include "Xe.h"

class XeMay : public Xe
{
    double giave;
public:
    XeMay();
    long long getgiave() const override;
};
