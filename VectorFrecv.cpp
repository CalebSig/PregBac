#include <fstream>
using namespace std;

ifstream cin("numarare8.in");
ofstream cout("numarare8.out");

///folosit cand sirul e marginit si nu ne intereseaza ordinea initala a termenilor dati 

int F[1000]; ///nr maxim este 999

int n,x,cnt;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        F[x]++; ///F[i] = de cate ori apare i in sirul dat
    }

    for(int i=100;i<=999;i++)
        if(F[i]==0)
        {
            int d,c=0;
            for(d=1;d*d<=i;d++)
                if(i%d==0)
                {
                    c+=2;
                    if(d*d==i) c--;
                }
            if(c==2) cnt++;
        }
    cout<<cnt;
    return 0;
}
