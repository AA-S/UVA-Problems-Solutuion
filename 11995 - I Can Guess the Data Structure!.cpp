#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>

using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    std::stack<int>st ;
    std::queue <int> qu ;
    std::priority_queue <int> pq ;

    bool isSt,isQu,isPq,isIm,isNotSu,isStC,isQuC,isPqC,isImC,isNotSuC;
    int n,com,val,stTop,quTop,pqTop,check;

    while(scanf("%d",&n)!=EOF)
    {
        isStC=true,isQuC=true,isPqC=true,isImC=true,isNotSuC=true;
        isSt = false,isQu = false, isPq = false;
        check = 1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d",&com,&val);
            if(com==1)
            {
                st.push(val);
                qu.push(val);
                pq.push(val);
            }
            else if(st.empty())
            {
                isSt = false,isQu = false, isPq = false;
                check=0;
                continue;
            }

            else if(!st.empty())
            {
                stTop =  st.top();
                st.pop();
                quTop = qu.front();
                qu.pop();
                pqTop = pq.top();
                pq.pop();
                check = 0;
                if(val==stTop && isStC)
                {
                    isSt = true;
                }
                else
                {
                    isSt = false;
                    isStC  = false;
                }
                if(val==quTop && isQuC)
                {
                    isQu  = true;
                }
                else
                {
                    isQu  = false;
                    isQuC = false;
                }


                if(val==pqTop && isPqC)
                    isPq = true;
                else
                {
                    isPq = false;
                    isPqC = false;
                }

            }

        }
        if(isSt||isQu||isPq || check)
        {
            if((isSt && isQu) || (isSt && isPq) || (isPq && isQu) || check)
                printf("not sure\n");
            else if(isSt)
                printf("stack\n");
            else if(isQu)
                printf("queue\n");
            else
                printf("priority queue\n");
        }

        else
            printf("impossible\n");

        int si = st.size();
        for(int i=0; i<si; i++)
        {
            st.pop();
            qu.pop();
            pq.pop();
        }
    }

    return 0;
}
