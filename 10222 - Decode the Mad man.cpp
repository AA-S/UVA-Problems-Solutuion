#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    //freopen("out2.txt","w",stdout);
    char ch[1000000];
    gets(ch);
    int len = strlen(ch);
    for(int i=0; i<len; i++)
    {
        if(ch[i]==']' ||ch[i]=='}')
            printf("p");
        else if(ch[i]=='[' ||ch[i]=='{')
            printf("o");
        else if(ch[i]=='\'' ||ch[i]=='\"')
            printf("l");
        else if(ch[i]==';' ||ch[i]==':')
            printf("k");
        else if(ch[i]=='.' ||ch[i]=='>')
            printf("m");
        else if(ch[i]==',' ||ch[i]=='<')
            printf("n");
        else if(ch[i]=='p' || ch[i]=='P')
            printf("i");
        else if(ch[i]=='o' || ch[i]=='O')
            printf("u");
        else if(ch[i]=='i' || ch[i]=='I')
            printf("y");
        else if(ch[i]=='u' || ch[i]=='U')
            printf("t");
        else if(ch[i]=='y' || ch[i]=='Y')
            printf("r");
        else if(ch[i]=='t' || ch[i]=='T')
            printf("e");
        else if(ch[i]=='r' || ch[i]=='R')
            printf("w");
        else if(ch[i]=='e' || ch[i]=='E')
            printf("q");
        else if(ch[i]=='l' || ch[i]=='L')
            printf("j");
        else if(ch[i]=='k' || ch[i]=='K')
            printf("h");
        else if(ch[i]=='j' || ch[i]=='J')
            printf("g");
        else if(ch[i]=='h' || ch[i]=='H')
            printf("f");
        else if(ch[i]=='g' || ch[i]=='G')
            printf("d");
        else if(ch[i]=='f' || ch[i]=='F')
            printf("s");
        else if(ch[i]=='d' || ch[i]=='D')
            printf("a");
        else if(ch[i]=='m' || ch[i]=='M')
            printf("b");
        else if(ch[i]=='n' || ch[i]=='N')
            printf("v");
        else if(ch[i]=='b' || ch[i]=='B')
            printf("c");
        else if(ch[i]=='v' || ch[i]=='V')
            printf("x");
        else if(ch[i]=='c' || ch[i]=='C')
            printf("z");

        else if(ch[i]==' ')
            printf(" ");
    }
    printf("\n");
    return 0;
}

