int find_sum_of_divisors(int num)
{   
    int t = num, divisor=2, sum=1, k;
    while(divisor <= num/2.0)
    {
        if(t%divisor == 0)
        {
            sum += divisor;
            printf("%d \n",divisor);
            while(t%divisor == 0)
                t = t/divisor;
        }
        else
            divisor++;
    }
    printf("\n\n\n");
    return sum;
}