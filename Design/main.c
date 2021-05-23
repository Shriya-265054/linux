/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "update.h"

user (*fp1)(info *,int,int,int)=update;
user (*fp2)(info *,int,info *)=search_by_empid;
int main()
{
    info *acc = NULL;
    info temp = {0};
    int see;
    int op;
    while(1)
    {
        printf("*****EMPLOYEE MANAGEMENT SYSTEM\n");
        printf("1.Update Employee Details.\n");
        printf("Press 0 to exit.\n");
        printf("Enter the choice: \n");
        scanf("%d",&op);
        switch(op)
        {
            char empname[60];
            int e_id;
            int salary;
            int leave;
            char address[60];
            char personal_mail_id[15];
            int phone_no;
            char marital_status[50];
            char BU[100];
            char role[50];
            struct info *nt;

            case 1:
            {
                printf("Enter Employee ID:\n");
                scanf("%d",&e_id);
                user id= (*fp2)(acc,e_id,&temp);
                if(see=1)
                {
                    int choice;
                    printf("Choose any of the below options you want to update: ");
                    printf("1. Update Name; \n");
                    printf("2. Update Role: \n");
                    printf("3. Update Salary: \n");
                    printf("4. Update BU: \n");
                    printf("5. Update Address: \n");
                    printf("6. Update Phone number: \n");
                    printf("7. Update Marital Status: \n");
                    printf("8. Update Leave: \n");
                    printf("9. Update Personal MailID: \n");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1: printf("Enter the name: \n");
                                scanf("%50s",empname);
                                break;
                        case 2: printf("Enter the role: \n");
                                scanf("%50s",role);
                                break;
                        case 3: printf("Enter the salary: \n");
                                scanf("%d",&salary);
                                break;
                        case 4: printf("Enter the BU: \n");
                                scanf("%10s",BU);
                                break;
                        case 5: printf("Enter the address: \n");
                                scanf("%50s",address);
                                break;
                        case 6: printf("Enter the phone number: \n");
                                scanf("%d",&phone_no);
                                break;
                        case 7: printf("Enter the marital status: \n");
                                scanf("%10s",marital_status);
                                break;
                        case 8: printf("Enter the leave: \n");
                                scanf("%d",leave);
                                break;
                        case 9: printf("Enter the personal mail id: \n");
                                scanf("%1000s",personal_mail_id);
                                break;
                    }
                    user id= (*fp1)(acc,e_id,choice,0);
                    printf("\n\n***DETAILS UPDATED \n\n");
                    break;
                }
                else
                {
                    printf("\n\n NO RECORD FOUND \n\n");
                    break;
                }
            }
        }
    }
}