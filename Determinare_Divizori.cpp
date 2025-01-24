#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned int s=0;
    cin>>n;
   /* for(int i=1;i<=n/2;i++) ///O(f(n)) -> cat de mult creste nr. de pasi efectuati pt. probl. de dim. n  
        if(n%i==0)
        {
            s+=i; ///O(n/2) = O(n)
        }*/
        
    for(int d=1;d*d<=n;d++) ///O(sqrt(n))
        if(n%d==0)
        {
            ///lucram cu div d
            s=s+d;
            if(d*d!=n) ///lucram cu div n/d
            {
                s=s+n/d;
            }
                
        }
        
    cout<<s; ///O(2*n)=O(k*n)=O(n)
    ///O(1) 
    ///O(a1n^k + a2n^(k-1) + ... + ak+1 ) =O(n^k)
    return 0;
}
