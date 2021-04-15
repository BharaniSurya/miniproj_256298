#include "car_operations.h"

void car_menu();
int valid_operation();
/* Start of the application */
int main()
{
    printf("\n****CAR_SERVICE CENTER****\n");
    int* ptr;
    int a=1;
    ptr=(int*)malloc(a*sizeof(int));      
    if(ptr==NULL)
    {
        exit(0);
    }
    while(1)
    {
        car_menu();
    }
    *ptr=5;
    free(ptr);
}

void car_menu(void)
{
    int car_operation;
    printf("\nAvailable Operations\n");
    printf("\n1. create profile\n2. update profile\n3. delete profile \n4.create service \n5.update service \n6.End service \n7. search profile \n8.search service \n9. Exit");
    printf("\n\tEnter your choice\n");
   
     // __fpurge(stdin);
    scanf("%d", &car_operation);
    printf("%d",car_operation);
    /*
    if(EXIT == car_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(car_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        // __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    */
    switch(car_operation)
    {
        case 1:
            printf("\nYou opted to create profile\n ");
            create_profile();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 2:
            update_profile();
            // __fpurge(stdin);
            getchar();
            break;
        case 3:
            delete_profile();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 4:
            create_service();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 5:
            update_service();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 6:
            end_service();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 7:
            search_profile();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 8:
            search_service();
            
            // __fpurge(stdin);
            getchar();
            break;
        case 9:
            printf("Thank you!!!");
            // __fpurge(stdin);
            getchar();
            break;                
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((1 <= operation) && (9 >= operation)) ? 1: 0;
}