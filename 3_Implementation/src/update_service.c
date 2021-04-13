#include <calculator_operations.h>

void update_service()
{
    int f=0;
    service ser={0};
    FILE *fp = NULL;
    char id1[5];
    fp = fopen(FILE_NAME,"rb+");
    if(fp == NULL)
    {
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
            fgets(ser.regular_service,1,stdin);
            if(ser.regular_service==0)
            {
                printf("\nHow many extra services do you require:");
                fflush(stdin);
                fgets(ser.no_of_extra_service,1,stdin);
            }
            break;
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!")
        exit(1);
    }
    fwrite(&ser,sizeof(ser), 1, fp);
    fclose(fp);

}