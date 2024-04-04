#pragma once
#include "D_1.h"
#include <iostream>

using namespace std;

class D3 : protected D1
{
    int d3;

public:
    D3(int x, int y, int z, int i) : D1(y, z, i), d3(x) {}
    ~D3() {}
    void show_D3();
};
