/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CAR_SERVICE_H__
#define __CAR_SERVICE_H__

#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>
#include <string.h>


/**
*  struct that has profile contents 
* @param[in] id
* @param[in] name 
* @param[in] phone_numb
* @param[in] email_id 
* @return nil
*/
typedef struct profile{
    char id[5];
    char name[300];
    char phone_numb[10];
    char email_id[50];
}profile;


/**
*  struct that has service contents 
* @param[in] id
* @param[in] car_number
* @param[in] car_model
* @param[in] regualr_service
* @param[in] no_of_extra_service 
* @return nil
*/
typedef struct service{
    char id[5];
    char car_number[10];
    char car_model[50];
    int regular_service;
    int no_of_extra_service;
}service;



/**
*  creates profile by getting info from user
* @param[in]  id  
* @return nil-creates profile 
*/
int create_profile ();


/**
*  creates service by getting info from user
* @param[in]  id  
* @return nil-creates service 
*/
void create_service ();

/**
*  deletes profile by getting id from user
* @param[in]  id  
* @return nil-delete profile 
*/
void delete_profile ();

/**
*  deletes service by getting id from user
* @param[in]  id  
* @return nil-end service 
*/
void end_service ();


/**
*  check if id is valid
* @param[in]  id  
* @return if id is valid
*/
int is_id_valid ();


/**
*  search profile by getting id from user
* @param[in]  id  
* @return nil-search profile 
*/
int search_profile();



/**
*  search service by getting id from user
* @param[in]  id  
* @return nil-search service
*/
void search_service ();



/**
*  update profile by getting id from user
* @param[in]  id  
* @return nil-update profile 
*/
void update_profile ();

/**
*   update service by getting id from user
* @param[in]  id  
* @return nil-update service 
*/
void update_service ();


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */