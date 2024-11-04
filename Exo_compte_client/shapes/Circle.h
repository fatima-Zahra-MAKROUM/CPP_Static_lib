#pragma once
#include "shapes.h"
class Circle :
    public shapes
{
private:
public:
    Circle();
    void Drow()override;
    ~Circle();
};

