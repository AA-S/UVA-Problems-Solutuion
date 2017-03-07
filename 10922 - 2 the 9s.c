c

        if(rem==0)
        {
            for(i=0;ch[i]!='\0';i++)
                num=num+ch[i]-'0';
                if(num>9)
                j=1;
            while(1)
            {
                sum=0;
                while(num!=0)
                {
                    a=num%10;
                    num=num/10;
                    sum=sum+a;
                }

                     j++;
                if(sum==9)
                    break;
                else
                    num=sum;

            }
            printf("%s is a multiple of 9 and has 9-degree %lld.\n",ch,j);
        }
        else
            printf("%s is not a multiple of 9.\n",ch);
    }
    return 0;
}
