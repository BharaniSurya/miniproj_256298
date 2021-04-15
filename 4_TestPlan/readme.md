# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  TH01       | While creating profile , to check whether name is between A-Z or a-z | Name1|pls enter alphabets only|pls enter alphabets only|Requirement based |
|  TH01       | after creating profile, check the contents | name  | FOUND|FOUND|Requirement based |
|  TH02       | search for existing file  |  name | FOUND |FOUND |Requirement based    |
|  TH02       | give input to edit and check the information  |  name_name | FOUND |FOUND|Requirement based    |
|  TH03       | if after deleting it should not be available  |  name_name | NOT FOUND |NOT FOUND|scenario  based    |
|  TH04       | while adding service to customer if profile is not available  | 0000 | Id not found|Id not found|scenario based  |
|  TH05       | while updating , give alphabets in extra services | a | not valid |not valid |scenario based  |
|  TH06       | In end service, give five digit id as input  | 00000 | Id not found|Id not found|boundary based  |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  TL01       | Create profile using unique id  | 0001 | SUCCESS |SUCCESS|Requirement based |
|  TL02       | if id is unique |  0001|UNIQUE|UNIQUE|Scenario based    |
|  TL03       |append and check the if it is updated| 0001|SUCCESS|SUCCESS|Requirement based    |
|  TL04       | remove info of service after ending service| end | no info|no info|Requirement based    |
|  TL05       | if provided with wrong id for delete profile | 0000|fail|fail|Scenario based    |
