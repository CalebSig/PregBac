#include <iostream>
using namespace std;

///PRELUCRAREA CIFRELOR DITNR-UN NUMAR

int main()
{
    /*
        VARIANTA I

        fie n numarul dat;
        while(n!=0)
        {
            int u=n%10; ///EXTRAGEM ultima cifra;
            ///... PRELUCRAM pe u
            n=n/10; ///TAIEM ultima cifra
        }
        !!!ATENTIE LA CAZURI PARTICULARE (exemplu contorul cifrelor)


        VARIANTA II

        fie n numarul dat;
        while(n>9)
        {
            int u=n%10; ///EXTRAGEM ultima cifra;
            ///... PRELUCRAM pe u
            n=n/10; ///TAIEM ultima cifra
        }
        int u=n%10; ///EXTRAGEM ultima cifra;
        ///... PRELUCRAM pe u

    */
    ///suma cifrelor- varianta I

    int n;
    cin>>n;
    int s=0;
    while(n!=0)
    {
        int u=n%10;
        s=s+u;
        n=n/10;
    }
    cout<<s;

    ///cate cifre ai- varianta II

    cin>>n;
    int c=0;
    while(n>9)
    {
        c++;
        n=n/10;
    }
    c++;
    cout<<c;

    return 0;
}
