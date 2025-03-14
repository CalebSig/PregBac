#include <iostream>
#include <cstring>
using namespace std;

char s[256],cuv[16];

int main()
{
    cin>>cuv;
    getchar();
    cin.getline(s,256);
    for(int i=0;i<=strlen(s)-strlen(cuv);i++)
        if(s[i]!=' ')
        {
            int j=i,k=0;
            char aux[256]="";
            while(s[j]!=' ' && s[j]) aux[k++]=s[j++];
            aux[k++]='\0';
            if(strcmp(cuv,aux)==0) ///inserez la pozitia poz = j sirul "?"
            {
                int poz=j;
                char sirDeInserat[256]="?";
                strcpy(aux,sirDeInserat);
                strcat(aux,s+poz);
                strcpy(s+poz,aux);
            }
            else i=j-1;
        }
    cout<<s;
    return 0;
}




