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
        while(st<=dr && !ok) ///cautare binara pentru sortat crescator. Pentru descrescator se inverseaza semnul de la linia 20
        {
            int mij=(dr+st)/2;
            if(X[mij]==y) ok=1;
            else if(X[mij]>y) dr=mij-1;
            else st=mij+1;
        }
        cout<<ok<<" ";
    }

    /*

    lower bound

    while(st<=dr)
    {
        int mij=(st+dr)/2;
        if(X[mij]>=y) dr=mij-1;
        else st=mij+1;
    }
    ///raspunsul se afla la oricare dintre st sau dr-1
        */

     /*

    upper bound

    while(st<=dr)
    {
        int mij=(st+dr)/2;
        if(X[mij]<=y) st=mij+1;
        else dr=mij-1;
    }
    ///raspunsul se afla la oricare dintre dr sau st-1
        */

    return 0;
}
