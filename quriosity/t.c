#include<stdio.h>

int main()
{
    FILE *fp;
    struct emp
    {
        char name[40];int age;float bs;
    };
    struct emp e;
    fp = fopen("Admit.dat","wb");

    while(fread(&e,sizeof(e),1,fp)==1)
        printf("%s%d%f\n",e.name,e.age,e.bs);
    fclose(fp);
    return 0;
}