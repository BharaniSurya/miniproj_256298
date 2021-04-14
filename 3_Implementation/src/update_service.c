#include "car_operations.h"

void update_service()
{
    int f=0;
    service ser={0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;
    char id1[5];
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\service_data.txt","rb+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    tmpFp = fopen("tmp.bin","wb");
    if(tmpFp == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        exit(1);
    }

    printf("\nTo Update your service:");
    printf("\nEnter your id:");
    fflush(stdin);
    fgets(id1,5,stdin);
    while (fread (&ser, sizeof(ser), 1, fp))
    {
        if(!strcmp(ser.id,id1))
        {
            f=1;
            printf("\nEnter your car number");
            fflush(stdin);
            fgets(ser.car_number,10,stdin);
            printf("\nEnter your car model");
            fflush(stdin);
            fgets(ser.car_model,50,stdin);
            printf("\nDo you want only regular service[yes:1,No:0]:");
            fflush(stdin);
            scanf("%d",&ser.regular_service);
            if(ser.regular_service==0)
            {
                printf("\nHow many extra services do you require:");
                fflush(stdin);
                scanf("%d",&ser.no_of_extra_service);
            }
            fwrite(&ser,sizeof(ser), 1, tmpFp);
            
        }
        else
        {
            fwrite(&ser,sizeof(ser), 1, tmpFp);
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!");
        getchar();
    }
    
    fclose(fp);
    fclose(tmpFp);
    remove("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\service_data.txt");
    rename("tmp.bin","E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\service_data.txt");

}