#include<stdio.h>

int main()
{
    FILE *fp;
    struct emp
    {
        char name[40]; int age; float bs;
    }exc2;
    struct emp exc1 ={"koushik",19,0.0};
    fp = fopen("employee.txt","w");
    fprintf(fp,"%s\n%d\n%f\n",exc1.name,exc1.age,exc1.bs);
    fscanf(stdin,"%s\n%d\n%f\n",exc2.name,exc2.age,exc2.bs);
    printf("%s\n%d\n%f\n",exc2.name,exc2.age,exc2.bs);
    fclose(fp);
    return 0;
}