#include<sys/stat.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int c,int arg[])
{
    char s[100];
    printf("ENTER THE PATH:\t");
    scanf("%s",&s);
    DIR *d;    struct dirent *r;
    int i=0;
    d=opendir(s);
    printf("\n\tNAME OF THE ITEM\n");
    while((r=readdir(d))!=NULL)
    {

        printf("\t%s\n",r->d_name);
        i+=1;
    }
    printf("\nTOTAL NUMBER OF ITEM IN THAT DIRECTORY IS %d\n",i);

}
