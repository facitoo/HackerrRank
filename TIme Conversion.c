/* a brute force methord to the time conversion problem */ 
#include<stdio.h>
int main()
{

    char time[10];     //input time as string
    scanf("%s",time);
   /* if(time[2]!=':' || time[5]!=':')           //test section
    {
        printf("invalid input1");
        return 0;
    }
    else if(time[3]>'5' || time[6]>'6')
    {
       printf("invalid minute or time");
       return 0;
    }
    else if(time[0]=='1' && time[1]>'2')
    {
        printf("invalid input 2");
        return 0;
    }*/                                         //end of test section
    if(time[8]=='A' || time[8]=='a')        //checking for AM or PM
    {
        if(time[0]=='1' && time[1]=='2')
        {
            time[0]='0';
            time[1]='0' ;
            time[8]='\0';
        }
        else
        {
            time[8]='\0';
        }
    }
    else if(time[8]=='P' || time[8]=='p')
    {
        if(time[0]=='1' && time[1]=='2')
        {
           time[8]='\0';
        }
        else if(time[1]=='8' || time[1]=='9')
        {
            time[0]=2+time[0];
            time[1]=time[1]-8;
        }
        else
        {
            time[0]=1+time[0];
            time[1]=2+time[1];
        }
        time[8]='\0';
    }
    else            //exception in input
    {
        printf("enter valid input 3");
    }
    printf("%s",time);
}
