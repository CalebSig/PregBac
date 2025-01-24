#include <iostream>

using namespace std;

int main()
{
    int p;
    bool ok=1;
    cin>>p;
    for(int d=2;d*d<=p && ok;d++) ///O(sqrt(p))
        if(p%d==0) ok=0;
        
    /*
        if(p%2==0 && p>2 || p<2) ok=0; ///O(sqrt(p)) -> sqrt(p)/2
        else 
            for(int d=3;d*d<=p && ok;d=d+2)
                if(p%d==0) ok=0;
                
    */
        
    ok==1?cout<<"DA":cout<<"NU"; /// Expresie?Instructiune1:Inctructiune2; 
    return 0;
}
