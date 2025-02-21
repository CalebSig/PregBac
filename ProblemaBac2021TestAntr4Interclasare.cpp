#include <iostream>
#include <fstream>
using namespace std;

ifstream fin1("bac1.txt");
ifstream fin2("bac2.txt");

int main()
{
    int na,nb,a=0,b=0;
    fin1>>na;
    fin2>>nb;
    
    while(na || nb)
    {
        if(a>=b)
        {
            if(a==b)
            {
                if(na)
                {
                    fin1>>a;
                    na--;
                }

                if(nb)
                {
                    fin2>>b;
                    nb--;
                }
            }
            else
            {
                if(b%5==0) cout<<b<<" ";
                if(nb)
                {
                    fin2>>b;
                    nb--;
                }
            }
        }
        else
        {
            if(a%5==0) cout<<a<<" ";
            if(na)
            {
                fin1>>a;
                na--;
            }
        }
    }

    if(a>b)
    {
        if(a%5==0) cout<<a;
    }
    else if(b>a)
    {
        if(b%5==0) cout<<b;
    }
    return 0;
}
