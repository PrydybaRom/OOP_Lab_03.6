#pragma once
#include "B2.h"
#include <iostream>

using namespace std;

class D2 : protected B2
{
    int d2;

public:
    D2(int x, int y) : B2(y), d2(x) {}
    ~D2() {}
    void show_D2();
};
