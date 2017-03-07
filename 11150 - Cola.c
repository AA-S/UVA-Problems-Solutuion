# include<stdio.h>
int main()
{
    long int empt,tot=0,rem,i,j,k;
    while(scanf("%ld",&empt)==1)
    {

        tot=empt;
        while(empt>1)
    {
        rem=empt%3;
        i=empt/3;

        tot=tot+i;
        empt=rem+i;
        if(empt==2)
            empt++;

    }
    printf("%ld\n",tot);
    }
return 0;

}
