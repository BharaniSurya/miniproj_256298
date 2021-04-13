#include <calculator_operations.h>
int is_id_valid(const char *id1)
{
    int f=0;
    profile p = {0};
    FILE *fp = NULL;
    fp = fopen(FILE_NAME,"rb");
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
    return(f);
}