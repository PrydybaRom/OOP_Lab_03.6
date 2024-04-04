#pragma once
#include "B1.h"
#include "B2.h"
#include <iostream>

using namespace std;

class D1 : public B1, private B2
{
    int d1;

public:
    D1(int x, int y, int z) : B1(y), B2(z), d1(x) {}
    ~D1() {}
    void show_D1();
};
