#include "car_operations.h"

void update_profile()
{
    int f=0;
    char new_name[300],new_phone_numb[10],new_email_id[50];
    profile p={0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;
    char id1[5];
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt","rb+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        getchar();
    }
    tmpFp = fopen("tmp.bin","wb");
    if(tmpFp == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        getchar();
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
            printf("\nold name : %s \nEnter new name: ",p.name);
            fflush(stdin);
            fgets(new_name,300,stdin);
            strcpy(p.name,new_name);
            printf("\nnew name:%s",p.name);
            printf("\nold phone number: %s \nEnter phone number:",p.phone_numb);
            fflush(stdin);
            fgets(new_phone_numb,10,stdin);
            strcpy(p.phone_numb,new_phone_numb);
            printf("\nold mail id: %s  \nEnter mail id:",p.email_id);
            fflush(stdin);
            fgets(new_email_id,50,stdin);
            strcpy(p.email_id,new_email_id);
            fwrite(&p,sizeof(p), 1, tmpFp);
        }
        else
        {
            fwrite(&p,sizeof(p), 1, tmpFp);
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!");
        getchar();
    }
    fclose(fp);
    fclose(tmpFp);
    remove("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt");
    rename("tmp.bin","E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt");


}