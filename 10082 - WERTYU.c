#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char str[10000];

    while(gets(str)!=NULL)
    {
        for(a=0 ; str[a]!='\0' ; a++)
        {
            if(str[a] == '1' )
            printf("`");

            else if(str[a] == '2' )
            printf("1");

             else if(str[a] == '3' )
            printf("2");

             else if(str[a] == '4' )
            printf("3");

             else if(str[a] == '5' )
            printf("4");

             else if(str[a] == '6' )
            printf("5");

             else if(str[a] == '7' )
            printf("6");

             else if(str[a] == '8' )
            printf("7");

             else if(str[a] == '9' )
            printf("8");

             else if(str[a] == '0' )
            printf("9");

             else if(str[a] == '-' )
            printf("0");

             else if(str[a] == '=' )
            printf("-");

             else if(str[a] == 'W' )
            printf("Q");

             else if(str[a] == 'E' )
            printf("W");

             else if(str[a] == 'R' )
            printf("E");

             else if(str[a] == 'T' )
            printf("R");

             else if(str[a] == 'Y' )
            printf("T");

             else if(str[a] == 'U' )
            printf("Y");

             else if(str[a] == 'I' )
            printf("U");

             else if(str[a] == 'O' )
            printf("I");

             else if(str[a] == 'P' )
            printf("O");

             else if(str[a] == '[' )
            printf("P");

             else if(str[a] == ']' )
            printf("[");

             else if(str[a] == '\\' )
            printf("]");

             else if(str[a] == 'S' )
            printf("A");

             else if(str[a] == 'D' )
            printf("S");

             else if(str[a] == 'F' )
            printf("D");

             else if(str[a] == 'G' )
            printf("F");

             else if(str[a] == 'H' )
            printf("G");

             else if(str[a] == 'J' )
            printf("H");

             else if(str[a] == 'K' )
            printf("J");

             else if(str[a] == 'L' )
            printf("K");

             else if(str[a] == ';' )
            printf("L");

             else if(str[a] == '\'' )
            printf(";");

             else if(str[a] == 'X' )
            printf("Z");

             else if(str[a] == 'C' )
            printf("X");

             else if(str[a] == 'V' )
            printf("C");

             else if(str[a] == 'B' )
            printf("V");

             else if(str[a] == 'N' )
            printf("B");

             else if(str[a] == 'M' )
            printf("N");

             else if(str[a] == ',' )
            printf("M");

             else if(str[a] == '.' )
            printf(",");

             else if(str[a] == '/' )
            printf(".");

             else if(str[a] == ' ' )
            printf(" ");

        }

            printf("\n");


    }

    return  0;
}
