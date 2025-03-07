#include <iostream>
using namespace std;
int x,smax=-1e9,s;
bool ok;
int main()
{
    while(cin>>x)
    {
        s=s+x;
        if(smax<x) smax=x;  //daca nu avem nr >=0
        if(x>=0) ok=1;
        if(s<0) s=0;
        else if(s>smax && ok) smax=s; ///cazul in care avem un nr >=0

    }
    cout<<smax;
    return 0;
}
