#include "car_operations.h"
void end_service()
{
    int f = 0;
    char id_delete[5];
    service ser = {0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;

    printf(" To Delete Books:\n");
    fp = fopen("E:\bharani_surya_real _official \ git repository \ AppliedSDLC_Template\ AppliedSDLC_Template\3_Implementation\service_data.txt","rb");
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
    
    printf("\n\t\t\tEnter customer ID to delete:");
    scanf("%s",id_delete);
    while (fread (&ser, sizeof(ser), 1, fp))
    {
        if(strcmp(ser.id,id_delete)!=0)
        {
            fwrite(&ser,sizeof(ser), 1, tmpFp);
        }
        else
        {
            f = 1;
        }
    }
    (f)? printf("\n\t\t\tProfile deleted successfully....."):printf("\n\t\t\tProfile not found");
    fclose(fp);
    fclose(tmpFp);
    remove("E:\bharani_surya_real _official \ git repository \ AppliedSDLC_Template\ AppliedSDLC_Template\3_Implementation\service_data.txt");
    rename("tmp.bin","E:\bharani_surya_real _official \ git repository \ AppliedSDLC_Template\ AppliedSDLC_Template\3_Implementation\service_data.txt");
}