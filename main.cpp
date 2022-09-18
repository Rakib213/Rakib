#include<stdio.h>
struct club{
        char cname[50];
        char name[50];
        int member;

}clb[100];
int numofclb;
void addclubdeatails()
{
    int idx=numofclb;
    printf("Enter club name:\n");
    fflush(stdin);
    gets(clb[idx].cname);
    printf("Enter leader member name :\n");
    gets(clb[idx].name);
    printf("Enter total member :\n");
    scanf("%d",&clb[idx].member);
    numofclb++;
    //printf("%s",clb[idx].cname);

    FILE *file;
    file=fopen("data.txt","a+");
    fprintf(file,"\n%s\n%s %d",clb[idx].cname,clb[idx].name,clb[idx].member);
    fclose(file);
}
void database()
{
    //int idx=numofclb;
    for(int i=0;i<numofclb;i++)
    {
        printf("%s\n",clb[i].cname);
        printf("%s\n",clb[i].name);
        printf("%d\n",clb[i].member);
    }
}
void Updateclub()
{
    int n;
    for(int i=0;i<numofclb;i++)
    {
        scanf("%d",&n);
        clb[i].member=n;
    }
}
void Findclub(char *cname,int len)
{
   int ok=1;;

    for(int i=0;i<numofclb;i++)
    {
        int sz=strlen(clb[i].cname);
        for(int j=0;j<sz;j++)}
        {
            int k=0;
            while(k<len && j+k<len)
            {
                if(clb[i].cname[j+k] != *(cname+k)) break;
                k++;
            }
            if(k==len)
            {
                ok=0;
                printf("%s\n",clb[i].cname);
                printf("%s\n",clb[i].name);
                printf("%d\n",clb[i].member);
            }
        }
    }
    if(ok) printf("\n\t\t\tOopse! Not Found.");
}
/*void removeclv(char *cname,int len )
{
    for(i=0;i<numofclb;i++)
    {
        int sz=strlen(clb[i].name);
        for(int j=0;j<sz;j++)
        {
            if()
        }

    }
}*/
int main()
{
    int ch;
    char nam[50];
    FILE *file;
    file=fopen("data.txt","r");
    fclose(file);
    //addclubdeatails();
    while(1)
    {
        printf("1.addclub deatails\n");
        printf("2.Update club\n");
        printf("3.Find club\n");
        printf("4.Print database\n");
        printf("5.remove club\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
           addclubdeatails();
           break;
        case 2:
            Updateclub();
            break;
        case 4:
            database();
            break;
        case 3:

           scanf("%s",nam);
            Findclub(nam,strlen(nam));
            break;
        case 5:
            scanf("%s",&nam);

            //removeclv(nam,strlen(nam));
            system("cls");
        }


    }
}
