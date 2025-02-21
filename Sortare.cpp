#include <iostream>

using namespace std;
int n,A[1001];
int main()
{
    cin>>n; ///metoda elevului, complexiate n^2
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(A[i]>A[j])
            {
                int aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
    for(int i=1;i<=n;i++)
        cout<<A[i]<<" ";
    return 0;
}
