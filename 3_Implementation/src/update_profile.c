#include <calculator_operations.h>

void update_profile()
{
    int f=0;
    profile p={0};
    FILE *fp = NULL;
    char id1[5];
    fp = fopen(FILE_NAME,"rb+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf("\nTo Update your profile:");
    printf("\nEnter your id:");
    fflush(stdin);
    fgets(id1,5,stdin);
    while (fread (&p, sizeof(p), 1, fp))
    {
        if(!strcmp(p.id,id1))
        {
            f=1;
            printf("\nEnter name:");
            fflush(stdin);
            fgets(p.name,300,stdin);
            printf("\nEnter phone number:");
            fflush(stdin);
            fgets(p.phone_numb,10,stdin);
            printf("\nEnter mail id:");
            fflush(stdin);
            fgets(p.email_id,50,stdin);
            break;
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!")
        exit(1);
    }
    fwrite(&p,sizeof(p), 1, fp);
    fclose(fp);

}