#include <calculator_operations.h>
void end_service()
{
    int f = 0;
    char id_delete[5];
    service ser = {0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;

    printf(" To Delete Books:\n");
    fp = fopen(FILE_NAME,"rb");
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
    remove(FILE_NAME);
    rename("tmp.bin",FILE_NAME);
}