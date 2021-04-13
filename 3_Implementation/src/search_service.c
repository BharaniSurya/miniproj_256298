#include <calculator_operations.h>
void search_service()
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
            printf("\nYour car number: %s",ser.car_number);
            printf("\nYour car model: %s",ser.car_model);
            printf("\nOnly regular service[yes:1,No:0]: %s",ser.regular_service);
            printf("\nextra services do you require: %s",ser.no_of_extra_service);
            break;
        }
    }
    if(f==0)
    {
        printf("NO RECORD FOUND!")
        exit(1);
    }
}