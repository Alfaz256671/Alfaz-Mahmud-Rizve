#include<stdio.h>
#include<string.h>
int main()
{
    char s1[15],s2[15],s3[15];
    scanf("%s%s%s",&s1,&s2,&s3);
    if(s1[0] == 'v')
        if(s2[0] == 'a')
            if(s3[0] == 'c')
                printf("aguia\n");
            else
                printf("pomba\n");

    if(s1[0] == 'v')
        if(s2[0] == 'm')
            if(s3[0] == 'o')
                printf("homem\n");
            else
                printf("vaca\n");

    if(s1[0] == 'i')
        if(s2[0] == 'i')
            if(strcmp(s3,"hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");

    if(s1[0] == 'i')
        if(s2[0] == 'a')
            if(s3[0] == 'h')
                printf("sanguessuga\n");
            else
                printf("minhoca\n");


    return 0;
}
