#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{ 
    char str[]="- This, a simple string.";
    char *pch;
    printf("Spliting string \"%s\" into tokens: \n",str);
    pch=strtok(str," ,.-");
    while(pch!=NULL){
        printf("%s\n",pch);
       pch=strtok(NULL,",.- ");
       
    }
}

