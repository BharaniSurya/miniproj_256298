#include "car_operations.h"

void create_profile()
{
    int s=0;
    profile p={0};
    FILE *fp=NULL;
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf(" To create a profile , please enter your details:/n ");
    do{
        printf("\nEnter an unique id  = ");
        fflush(stdin);
        fgets(p.id,5,stdin);
        
        s = is_id_valid(p.id);
        if (s)
        {
            printf("\nid is not unique. Please enter again.");
        }

    }while(s);
    printf("\nEnter name:");
    fflush(stdin);
    fgets(p.name,300,stdin);
    printf("\nEnter phone number:");
    fflush(stdin);
    fgets(p.phone_numb,10,stdin);
    printf("\nEnter mail id:");
    fflush(stdin);
    fgets(p.email_id,50,stdin);
    
    fwrite(&p,sizeof(p), 1, fp);
    fclose(fp);

}