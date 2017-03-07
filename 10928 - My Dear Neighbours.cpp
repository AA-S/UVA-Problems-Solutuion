#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        int num,i=0,j,k,value,counter,arr[10000]={0},tmp=0;
        char ch;
        scanf("%d",&num);
        arr[0] = 1;
        for(int line=1;line<=num;line++)
        {
            counter = 0;
            while(scanf("%d%c",&value,&ch))
            {
                counter++;
                if(line==1)
                {
                     tmp = counter;
                     //arr[i++] =line;
                }

                if(ch=='\n')
                    break;

            }

            if(counter<tmp)
            {
                tmp = counter;
                i=0;
                arr[i++] = line;

            }
            else if(counter==tmp)
            {
                tmp = counter;
                arr[i++] = line;
                //i=0;
            }

        }

        for(int j=0;j<i;j++)
        {
            if(j!=i-1)
            cout << arr[j] << " ";
            else
                 cout << arr[j];
        }

        cout << endl;
    }
    return 0;
}
