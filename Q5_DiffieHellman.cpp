#include <math.h>
#include <iostream>
using namespace std;

int GetKey(int g, int h, int p)
{
    if(h==1)
        return g;
    else
        return ((int)pow(g,h) % p);
}

int main()
{
    int p = 23;
    int g = 9;

    int x = 3;
    int y = 4;

    int priA = GetKey(g, x, p);
    int priB = GetKey(g, y, p);

    cout<<"Secret key for A: "<<GetKey(priB, x, p)<<endl;
    cout<<"Secret key for B: "<<GetKey(priA, y, p)<<endl;
}