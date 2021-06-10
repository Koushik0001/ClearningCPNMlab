float degree_to_rad(float);
float facto(int);
float fpower(float ,int);
float permu(int ,int);
float combo(int ,int);
float mod(float);
float fsin(float);
float fcos(float);
float ftan(float);
float fcot(float);


float facto(int num)
{
    float factorial=1;
    for(float i=1; i<=num; i++)
        factorial = i* factorial;
    return (factorial);
}
float fpower(float base, int power)
{
    float ans=1;
    if(power != 0)
    {
        for(int i=0; i<power; i++)
            ans =ans * base;
        return(ans);
    }
    else if(power == 0)
        return(1);    
}
float permu(int n, int r)
{
    float ans = facto(n)/facto(n-r);
    return(ans);
}
float combo(int n, int r)
{
    float ans = permu(n,r)/facto(r);
    return(ans);
}
float mod(float a)
{
    if(a >= 0)
        return(a);
    else
        return(-a);
}
float fsin(float y)
{   
    if(y>360)
    {
        do
        {
            y = y-360;
        } while (y>360);
        
    }
    float x = degree_to_rad(y);
    float ansx1=0,ansx0=0,i=0,t=1;
    while(1)
    {
        ansx1 = ansx1 + fpower(-1,i) * fpower(x,t)/facto(t);
        t += 2; i++;
        if(i>5 && mod(ansx1-ansx0)<0.000000001)
            break;
        ansx0=ansx1;
    }
    return(ansx1);
}
float fcos(float y)
{
    if(y>360)
    {
        do
        {
            y = y-360;
        } while (y>360);
        
    }
    float x = degree_to_rad(y);
    float ansx1=1, ansx0=0;int i=1, t=2;
    while (1)
    {
        ansx1 = ansx1 + fpower(-1,i) * fpower(x,t)/facto(t);
        t += 2; i++;
        if(i>6 && mod(ansx1-ansx0)<0.000000001)
            break;
        ansx0 = ansx1;
    }
    return (ansx1);
}
float ftan(float x)
{
    if(fcos(x) != 0)
        return (fsin(x)/fcos(x));
}
float degree_to_rad(float x)
{
    float ans = x * 3.14159265/180.0;
    return(ans);
}
float fcot(float x)
{
    if(fsin(x) != 0)
        return(fcos(x)/fsin(x));
}
