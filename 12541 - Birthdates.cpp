#include<bits/stdc++.h>

using namespace std;

class BirthDate
{
    public:
    char name[100];
    int dd,mm,yy;
    //bool sorting(BirthDate,BirthDate);
};

bool sorting (BirthDate a, BirthDate b)
{
    if(a.yy>b.yy) return true;
    else if(a.yy==b.yy && a.mm>b.mm) return true;
    else if(a.yy==b.yy  && a.mm==b.mm && a.dd>b.dd) return true;
    else return false;
}

int main()
{
    int test;
    scanf("%d",&test);
    BirthDate date[test+1];

   for(int i=0;i<test;i++)
        cin >> date[i].name >> date[i].dd >>  date[i].mm >> date[i].yy;

    sort(date,date+test,sorting);

    cout << date[0].name << endl << date[test-1].name << endl;

    return 0;
}
