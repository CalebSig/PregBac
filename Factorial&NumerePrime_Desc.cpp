/*
    La ce putere apare numarul prim p in
    descompunerea in factori primi a lui n!
*/


#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int s=0;
    for(long long i=p;i<=n;i=i*p) s=s+n/i;
    cout<<s;
    return 0;
}
