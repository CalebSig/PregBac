#include <iostream>
#include <algorithm>
using namespace std;
int X[25001],m,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>X[i];
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int y;
        cin>>y;
        bool ok=0;
        int st=1,dr=n;
        while(st<=dr && !ok)
        {
            int mij=(dr+st)/2;
            if(X[mij]==y) ok=1;
            else if(X[mij]>y) dr=mij-1;
            else st=mij+1;
        }
        cout<<ok<<" ";
    }

    return 0;
}
