#include <iostream>
#include <cstring>
using namespace std;
char s[256];
int p;
int main()
{
    cin>>p>>s;
    for(int i=0;i<=strlen(s)-p;i++)
    {
        char aux[256];
        strcpy(aux,s);

        ///eliminare un subsir de lungime p de la poz i dintr un sir
        //strcpy(aux+i,aux+i+p); var cea mai simpla DAR NU LA BAC

        char aux2[256];
        strcpy(aux2,aux+i+p);
        strcpy(aux+i,aux2);


        cout<<aux<<endl;
    }
    return 0;
}
