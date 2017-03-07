#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int no_of_person, budget, no_of_hotels, no_of_weeks, decision;
    while(scanf("%d%d%d%d",&no_of_person,&budget,&no_of_hotels,&no_of_weeks)!=EOF)
    {

        decision=650000;
        //cin>>no_of_person>>budget>>no_of_hotels>>no_of_weeks;

        for(int i=0; i<no_of_hotels; i++)
        {
            int cost_of_room, arr[no_of_weeks+5];
            cin>>cost_of_room;

            for(int j=0; j<no_of_weeks; j++)
            {
                cin>>arr[j];

                if(arr[j]>=no_of_person)
                {
                    int temp = cost_of_room*no_of_person;

                    if(temp<=budget)
                    {
                        if(temp<decision)
                        {
                            decision=temp;
                        }
                    }
                }
            }


        }

        if(decision<=500000)
        {
            cout<<decision<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }
    }
    return 0;
}
