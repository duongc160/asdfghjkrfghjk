#pragma once
#include "Xe.h"

class Oto : public Xe
{
    double giave;
public:
    Oto();
    long long getgiave() const override;
};
