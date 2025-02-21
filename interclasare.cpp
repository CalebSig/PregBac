#include <fstream>

using namespace std;

ifstream cin("interclasare.in");
ofstream cout("interclasare.out");

int na,A[100001],nb,B[100001],nc,C[200002]; //2 vectori ordonati rezulta intr un vector mare ordonat
int main()
{
    cin>>na;
    for(int i=1;i<=na;++i) cin>>A[i];
    cin>>nb;
    for(int i=1;i<=nb;++i) cin>>B[i];

    int i=1,j=1;
    while(i<=na && j<=nb)
        {
            if(A[i]<=B[j]) C[++nc]=A[i++];
            else C[++nc]=B[j++];
        }
    while(i<=na) C[++nc]=A[i++]; //B e gata
    while(j<=nb) C[++nc]=B[j++]; //A e gata
    for(int q=1;q<=nc;q++)
    {
        cout<<C[q]<<" ";
        if(q%10==0) cout<<endl;
    }
    return 0;
}
