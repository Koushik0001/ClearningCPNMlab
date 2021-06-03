#include<stdio.h>
#include<string.h>

struct engi_parts
{
    char mfy[5],material[11],quanti[11];
};
int store_info(struct engi_parts[]);
void show_pvart_info(struct engi_parts[]);
int name_search(char []);

int main()
{
    struct engi_parts s[360];
    int m;
    char op;
    do
    {
        printf("What do you want to do:\n\t\t1)store iformation\n\t\t2)see part information\n");
        scanf("%d",&m);
        switch(m)
        {
            case 1:
                store_info(s);
                break;
            case 2:
                show_pvart_info(s);
        }
        printf("Do you want to run the program again? (y/n) : ");
        fflush(stdin);
        scanf("%c",&op);
        printf("\n");
    }while(op == 'y');

    return 0;
}

int store_info(struct engi_parts s[])
{
    char snum[4],op;
    int memory_loc;
    do
    {
        printf("Enter the serial number: ");
        scanf("%s",snum);
        memory_loc = name_search(snum);
        fflush(stdin);
        printf("Year of Manufacture : ");
        gets(s[memory_loc].mfy);
        fflush(stdin);
        printf("Material : ");
        gets(s[memory_loc].material);
        fflush(stdin);
        printf("Quantity Manufactured : ");
        gets(s[memory_loc].quanti);
        fflush(stdin);
        printf("\nEnter another part(y/n) : ");
        scanf("%c",&op);
        fflush(stdin);
        printf("\n");
    }while(op=='y');
}

void show_pvart_info(struct engi_parts s[])
{
    int m;
    char snum[4];
    int memory_loc;
    printf("\nDo you want to see\n\t\t1) random parts\n\t\t2)starting from n th pert to r th part?");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("How many parts' info you want to see : ");
            int n;
            scanf("%d",&n);
            printf("\n\n");
            for(int i=0;i<n;i++)
            {
                printf("Enter the serial number: ");
                scanf("%s",snum);
                memory_loc = name_search(snum);
                fflush(stdin);
                puts(s[memory_loc].mfy);
                puts(s[memory_loc].material);
                puts(s[memory_loc].quanti);
            }
            printf("\n");
            break;
        case 2:
            printf("starting part : ");
            scanf("%s",snum);
            int memory_loc2;
            memory_loc = name_search(snum);
            printf("ending part : ");
            scanf("%s",snum);
            memory_loc2 = name_search(snum);
            for(int i = memory_loc;i<=memory_loc2;i++)
            {
                printf("MFY : ");
                puts(s[i].mfy);
                printf("Material : ");
                puts(s[i].material);
                printf("Quantity : ");
                puts(s[i].quanti);
                printf("\n\n");
            }
            printf("\n");
    }
}

int name_search(char snum[4])
{
    int memory_loc,t=0;
    
    int c1 = snum[0];
    for(int i=65;i<=c1;i++)
        t++;
    memory_loc = (t-1) * 60;


    t=0;
    int c2 = snum[1];
    for(int i=65;i<c2;i++)
        t++;
    memory_loc = memory_loc + t*10;


    t=0;
    int c3 = snum[2];
    for(int i=48;i<c3;i++)
        t++;
    memory_loc = memory_loc + t*1;

    return(memory_loc);
}
