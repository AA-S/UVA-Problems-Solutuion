#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

bool prime(int num)
{
    if(num==1) return false;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    char ch[2050],m,n,str[2050];
    int test,cases=1;
    //freopen("out.txt","w",stdout);
    //freopen("in.txt","r",stdin);

    scanf("%d",&test);
    while(cases<=test)
    {
        scanf("%s",ch);
        int i,j,len,a,b,freq[2050]= {0};
        len=strlen(ch);

        for(i=0; i<len; i++)
        {
            for(j=0; j<len; j++)
            {
                if(j<i)
                {
                    if(ch[i]==ch[j])
                    {
                        freq[j]++;
                        break;
                    }
                }
                else if(i==j)
                {
                    freq[j]++;
                    break;
                }

            }
        }

        j=0;
        for(i=0; i<len; i++)
        {

            if(freq[i]!=0 && prime(freq[i]))
            {

                str[j++] = ch[i];
            }
        }
        str[j]  = '\0';
        std::string s(str);
        std::sort(s.begin(),s.end());
        if(s.empty())
            s = "empty";
        cout << "Case "<< cases << ": " << s << endl;

        cases++;

    }
    return 0;

}

