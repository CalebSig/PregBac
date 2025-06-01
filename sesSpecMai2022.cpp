/*

Numim secvență progresivă a unui șir crescător de numere naturale un subșir al acestuia, format din termeni aflați pe poziții consecutive în șirul dat, cu proprietatea că fiecare termen apare în subșir de un număr de ori egal cu valoarea sa. Lungimea secvenței este egală cu numărul de termeni ai acesteia.

Fișierul bac.txt conține un șir crescător de cel mult 
 numere naturale din intervalul 
, astfel încât orice termen al șirului apare de un număr de ori cel mult egal cu valoarea sa. Numerele sunt separate prin câte un spațiu.

Se cere să se afișeze pe ecran lungimea maximă a unei secvențe progresive din șirul aflat în fișier.

Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate.

Exemplu: dacă fişierul conţine numerele 1 2 2 3 4 4 4 4 6 6 6 6 6 6 7 7 7 8 8 8 8 8 8 8 8 atunci pe ecran se afișează valoarea 10.

    */



#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int lmax,l,sirCurent = 1;

int main()
{
    int x,y;
    fin>>y;
    while(fin>>x)
    {
        if(x==y)
        {
            sirCurent++;
        }
        else
        {
            if(y == sirCurent)
            {
                l=l+sirCurent;
                sirCurent = 1;
                if(l>lmax) lmax=l;
            }
            else l=0, sirCurent = 1;
        }
        y=x;
    }

    if(y == sirCurent)
    {
        l=l+sirCurent;
        if(l>lmax) lmax=l;
    }
    else l=0, sirCurent = 1;

    cout<<lmax;

    return 0;
}
