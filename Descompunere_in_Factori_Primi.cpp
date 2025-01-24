#include <iostream>
using namespace std;
int main()
{
    int n,d=2;
    cin>>n;
    while(n>1)
    {
        if(n%d==0) ///gasim nr prime care sa divida pe d
        {
            while(n%d==0)
            {
                cout<<d<<" ";
                n=n/d;
            }
        }
        d++;
        if(d*d>n) d=n; ///ori n e nr prim (a mai rams un factor prim la puterea 1) sau n=1
    } ///O(sqrt(n))
    return 0;
}
