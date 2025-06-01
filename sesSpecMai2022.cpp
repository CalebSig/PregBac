#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int lmax,l,sirCurent = 1;

int main()
{
    int x,y;
    fin>>y;
    while(fin>>x)
    {
        if(x==y)
        {
            sirCurent++;
        }
        else
        {
            if(y == sirCurent)
            {
                l=l+sirCurent;
                sirCurent = 1;
                if(l>lmax) lmax=l;
            }
            else l=0, sirCurent = 1;
        }
        y=x;
    }

    if(y == sirCurent)
    {
        l=l+sirCurent;
        if(l>lmax) lmax=l;
    }
    else l=0, sirCurent = 1;

    cout<<lmax;

    return 0;
}
