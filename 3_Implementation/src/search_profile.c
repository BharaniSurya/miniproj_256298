#include "car_operations.h"

void search_profile()
{
    int f=0;
    profile p={0};
    FILE *fp = NULL;
    char id1[5];
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt","rb+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf("\nTo search your profile:");
    printf("\nEnter your id:");
    fflush(stdin);
    fgets(id1,5,stdin);
    while (fread (&p, sizeof(p), 1, fp))
    {
        if(!strcmp(p.id,id1))
        {
            f=1;
            printf("\nEnter name:%s",p.name);
            printf("\nEnter phone number:%s",p.phone_numb);
            printf("\nEnter mail id:%s",p.email_id);
            break;
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!");
        getchar();
    }
    fclose(fp);
}    