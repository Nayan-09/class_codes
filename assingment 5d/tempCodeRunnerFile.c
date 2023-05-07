 int x=2,i,sum=0,odd,even,sum2=0;
    for(i=1;i<=10;i++)
    {
        odd=2*i+1;
        even=2*i;
        sum=sum + pow(x,odd);
        sum2=sum2 + pow(x,even);
    }
    printf("Sum of series is %d",sum-sum2);