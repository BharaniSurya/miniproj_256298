#include "car_operations.h"
int is_id_valid(const char*);
void create_service()
{
    int s=0;
    char id1[5];
    profile p={0};
    service ser ={0};
    FILE *fp=NULL;
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\service_data.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf(" To create a service , please enter your details:\n ");
    printf("\nEnter your unique id");
    fflush(stdin);
    fgets(ser.id,5,stdin);
    s=is_id_valid(ser.id);
    if(s==0)
    {
        printf("Not A Valid id");
        exit(1);
    }
    printf("\nEnter your car number");
    fflush(stdin);
    fgets(ser.car_number,10,stdin);
    printf("\nEnter your car model");
    fflush(stdin);
    fgets(ser.car_model,50,stdin);
    printf("\nDo you want only regular service[yes:'1',No:'0']:");
    fflush(stdin);
    scanf("%d",&ser.regular_service);
    if(ser.regular_service==0)
    {
        printf("\nHow many extra services do you require:");
        fflush(stdin);
        scanf("%d",&ser.no_of_extra_service);
    }
    else
    {
        ser.no_of_extra_service=0;
    }
    fwrite(&ser,sizeof(ser), 1, fp);
    fclose(fp);

}