#include "car_operations.h"
int is_id_valid(const char *id1)
{
    int f=0;
    profile p = {0};
    FILE *fp = NULL;
    fp = fopen("E:\\bharani_surya_real _official\\git repository\\AppliedSDLC_Template\\AppliedSDLC_Template\\3_Implementation\\profile_data.txt","rb");
    if(fp == NULL)
    {
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
     while (fread (&p, sizeof(p), 1, fp))
    {
        if(!strcmp(p.id, id1))
        {
            f = 1;
            break;
        }
    }
    fclose(fp);
    return(f);
}