// Source.cpp
#include <iostream>
#include <Windows.h>
#include "D_1.h"
#include "D_2.h"
#include "D_3.h"
#include "D_4.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    B1 o0(777);
    cout << "B o0(777);" << endl;
    cout << "sizeof(B) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B: " << endl;
    o0.show_B1();

    D1 o1(100, 200, 300);
    cout << "D1 o1(100, 200, 300);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1: " << endl;
    o1.show_D1();

    D2 o2(1000, 2000);
    cout << "D2 o2(1000, 2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2: " << endl;
    o2.show_D2();

    D3 o3(100, 200, 300, 400);
    cout << "D3 o3(100, 200, 300, 400);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "Ієрархія класу D3: " << endl;
    o3.show_D3();

    D4 o4(1, 2, 3);
    cout << "D4 o4(1, 2, 3);" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << endl << "Ієрархія класу D4: " << endl;
    o4.show_D4();

    return 0;
}
