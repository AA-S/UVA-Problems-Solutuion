#include<iostream>

using namespace std;

int main()
{
    unsigned long long int num1,num2,i,j,a,b,counter=0;

    while(1)
    {
        j=0;
        cin >> num1 >> num2;
        if(num1==0&&num2==0)
            return 0;

        while(1)
        {
            a=num1%10;
            b=num2%10;

            num1=num1/10;
            num2=num2/10;

            if(a+b+j>9)
            {
                counter++;
                //num2++;
                j=1;
                if(num1==0)
                {
                    while(num2)
                    {
                        i = num2%10;
                        num2 = num2/10;

                    if(i+j>9)
                    {
                         counter++;
                        // j=0;
                    }
                    else
                         j=0;

                    }

                    break;
                }

                if(num2==0)
                {
                    while(num1)
                    {
                         i = num1%10;
                         num1=num1/10;
                    if(i+j>9)
                    {
                        counter++;
                    }
                    else
                         j=0;

                    }

                    break;
                }
            }
            else
                j=0;
            if(num1==0||num2==0)
                break;

        }

        if(counter==0)
            cout << "No carry operation.\n";
        else if(counter==1)
            cout << counter << " carry operation.\n";
        else
            cout << counter << " carry operations.\n";
        counter=0;
    }

   return 0;
}
