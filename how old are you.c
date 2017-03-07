#include<stdio.h>
void main()
{
    struct b
    {
        char n[30];
        int day;
        int mon;
        int y;
    };
    struct b f[2];
    int i,j,dd,dm,dy;

    for(i=0;i<2;i++)
    {
        scanf("%s%d%d%d",f[i].n,&f[i].day,&f[i].mon,&f[i].y);
    }
    if(f[0].y>f[1].y)
    {
        if(f[0].day>=f[1].day)
        {
            dd=f[0].day-f[1].day;
        }
        else
        {
            dd=f[0].day+30-f[1].day;
            f[1].mon++;
        }
         if(f[0].mon>=f[1].mon)
         {
             dm=f[0].mon-f[1].mon;
         }
         else
         {
             dm=f[0].mon+12-f[1].mon;
             f[1].y++;
         }
         dy=f[0].y-f[1].y;
    }
    else if(f[0].y<f[1].y)
    {
        if(f[1].day>=f[0].day)
        {
            dd=f[1].day-f[0].day;
        }
        else
        {
            dd=f[1].day+30-f[0].day;
            f[0].mon++;
        }
         if(f[1].mon>=f[0].mon)
         {
             dm=f[1].mon-f[0].mon;
         }
         else
         {
             dm=f[1].mon+12-f[0].mon;
             f[1].y++;
         }
         dy=f[1].y-f[0].y;
    }

    else
    {
        if(f[0].mon>f[1].mon)
        {
            if(f[0].day>=f[1].day)
            {
                dd=f[0].day-f[1].day;
            }
            else
            {
                dd=f[0].day+30-f[1].day;
                f[1].mon++;
            }
            dm=f[0].mon-f[1].mon;
        }
        else if(f[0].mon<f[1].mon)
        {
            if(f[1].day-f[0].day)
            {
                dd=f[1].day-f[0].day;
            }
            else
            {
                dd=f[1].day+30-f[0].day;
                f[0].mon++;
            }
            dm=f[1].mon-f[0].mon;
        }
        else
        {
            if(f[0].day>=f[1].day)
            {
                dd=f[0].day-f[1].day;
            }
            else
            {
                dd=f[1].day-f[0].day;
            }
            dm=0;
        }
        dy=0;
    }

    printf("Difference of age of %s and %s is day=%d  month=%d  year=%d",f[0].n,f[1].n,dd,dm,dy);
}
