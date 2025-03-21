///rezolvare pb 4 sub 3 din 2011 iunie-iulie

#include <iostream>
using namespace std;

int s1,s2,a,b,c,d;

int main()
{
    cin>>s1>>s2;
    for(a=1;a<=9;a++)
        if(s1-a<=9)
        {
            b=s1-a;
            for(int e=0;e<=9;e++)
            {
                for(c=0;c<=9;c++)
                    if(s2-c<=9)
                    {
                        d=s2-c;
                        cout<<a<<b<<e<<c<<d<<endl;
                    }
            }
        }
    return 0;
}
