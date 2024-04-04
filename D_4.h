#pragma once
#include "D_2.h"
#include <iostream>

using namespace std;

class D4 : protected D2
{
    int d4;

public:
    D4(int x, int y, int z) : D2(y, z), d4(x) {}
    ~D4() {}
    void show_D4();
};
