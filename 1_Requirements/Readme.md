# Requirements
## Introduction
 --- In this busy world we some management systems to store our data which we require normally and also which cannot be all remembered either.We have been using records to write down the data which is takes up space and require hardwork to record it properly.Instead we can use this mangement systems to store the data and update it with ease . Also one of the major disadvantage of those written Records is that we cannot update it properly. Here , car service management will be implemented so that the service agency can easily manage the data and 
 be never forget a service or informing the client about the completed service car which the customer has to pickup.
 ---This topic was chosen to show my skills in c programming about using the important features and to learn to implement in a professional way to make sure about the working ,efficiency,
time complexity and resource management.  

## Research
-- What can this system do?
     As a customer we can easily blame that service is bad but no company wants to give a bad service or hold back our car for no reason .The only reason would be that they had many work 
where they forgot your case or some other confusion in who has to take care of those is not properly assigned in service. So to take care of this problem we use this management to take care 
of the data and be updated to make the customer and the service company happy and satisified.

Advantages if using the management system?
     By using this management system we dont require lots of Record where we use to search for the customer information and it can easily update the information and use it to the advantage 
of the customers to provide the promised service.Also the process will be ease because serviceman can easily visualize the work.

How can we improvise it in future?
     The management system can be extended in any direction , one of possible and useful area is where we use cloud to store the data rather than in a single computer and create a UI for
the customers to view the process going on the car and alert automatically to the customer to pickup the vehicle after the completion of the service.
 
## Cost and Features
    1. File space to store record
    2. offline system useage

## Defining Our System
   ![system definition](https://github.com/BharaniSurya/miniproj_256298/blob/main/1_Requirements/system_define.PNG)
## SWOT ANALYSIS
### s:
   makes easy to maintain a record.
   updation of the records are simple.
### w:
  need a power supply to use it while book records don't.
   if there is some system crash ,all the data would be lost forever.
### o:
    can be integrated with the cloud to be accessed from any computer.
   it can be made into an app where even the customer can see the progress
### t:
    unlike book records if someone manipulates with tha data it is hard to find out.

# 4W&#39;s and 1&#39;H

## Who:

**Any car service company who are having problems with managing data of their customers.**

## What:

**Can manage the data of the customers so that it would ease the maintainance  of records the employees.And can be used to easily update the information.**

## When:

**Car always need a regular maintainance so that it works properly hence the requirement of the software to input and update would be at a high frequency.**

## Where:

**At car service stations to make a note of the record of the customers.**

## How:

**By creating a executable file which can write, read, update records of customer by using file handiling**

# Detail requirements
## High Level Requirements:

   | ID | Description | Status (Implemented/Future) |
   | -- | ----------- | --------------------------- |
   | H01  | To create a profile for customer        | I |
   | H02  | To edit an existing profile             | I |
   | H03  | To delete a profile of leaving customer | I |
   | H04  | To add a service to a customers profile | I |
   | H05  | To update the service of a customer     | I |
   | H06  | To End a service of a customer          | I |
   | H07  | To search for a profile of customer     | I |
   | H08  | To search for a service for a customer  | I |


##  Low level Requirements:

| ID | Description | Status (Implemented/Future) |
| -- | ----------- | --------------------------- |
| L01 | Creating a file for the profile   | I |
| L02 | To check whether the id provided by the user is unique  | I |
| L03 | Appending the information in a file | I |
| L04 | search id and return found or not found | I |
| L05 | create a file for service information | I |
| L06 | add information if the customer has a profile | I |
| L07 | remove the service information if service is done | I |
| L08 | remove profile if customer wants to quit service at all | I |
| L09 | if id matches print the information of profile | I |
| L10 | if id matches print information of service | i | 