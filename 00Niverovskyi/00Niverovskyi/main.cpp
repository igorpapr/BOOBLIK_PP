#include "testers.h"
#include <iostream>

using namespace std;


int main()
{   //testerSUM(n,x)
    testerSUM(0,1);
    testerSUM(1,2);
    testerSUM(10,0.5);
    //testerSinus(x,eps)
    testerSinus(0.5,1e-2);
    testerSinus(-9,1e-5);
    testerSinus(25,1e-3);
    //testerDMod(i,j) i/j
    testerDMod(4,2);
    testerDMod(7,2);
    testerDMod(255,11);
    //testerGCD(i,j) мяд(i,j)
    testerGCD(15,25);
    testerGCD(9,65);
    testerGCD(0,11);

    return 0;
}