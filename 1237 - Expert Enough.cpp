#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int test,cases,L[10010],H[10010],D,Q,P;

int finder(int P)
{
    int counter=0;
    int index = -1;
    for(int i=0;i<D;i++)
    {
        if(P>=L[i] && P<=H[i])
        {
            counter++;
            index = i;
        }

        if(counter>1)
            return -1;
    }
    if(counter==0)
        return -1;
    return index;
}

int main()
{
    freopen("in.txt","r",stdin);
    string M[10010];

    scanf("%d",&test);
    for(int cases=1;cases<=test;cases++)
    {
        scanf("%d",&D);

        for(int i=0;i<D;i++)
        {
            cin >> M[i];
            scanf("%d%d",&L[i],&H[i]);
        }
        scanf("%d",&Q);
         for(int i=0;i<Q;i++)
        {
            scanf("%d",&P);
            int index = finder(P);
            if(index != -1)
                cout << M[index] << endl;
            else
                cout << "UNDETERMINED\n";
        }
        if(cases!=test)
        cout << endl;

    }

    return 0;
}
