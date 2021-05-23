/**
 * @file update.c
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"update.h"
/**
 * @brief It is the search function to search an employee ID to update his/her details.
 * 
 * @param acc 
 * @param e_id 
 * @param temp 
 * @param see 
 * @return user 
 */
user search_by_empid(info *acc, int e_id, info *temp)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_EMPACC_EXIST;
    }
    else
    {
        int flag=0;
        while(p!=NULL)
        {
            if(p->empid == e_id)
            {
                flag=1;
                break;
            }
            p=p->nt;
        }
        if(flag==1)
        {
            return EMPID_EXIST;
            printf("Employee ID exists %d \n:",acc->empid);
        }
        else
        {
            return EMPID_DOESNT_EXISTS;
            printf("Employee ID doesn't exists");
        }
        return 1;
    }
}
/**
 * @brief Update function to check and executed the option pressed for updating the details.
 * 
 * @param acc 
 * @param e_id 
 * @param check 
 * @param get 
 * @return user 
 */
user update(info *acc,int e_id,int check,int get)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_EMPACC_EXIST;
    }
    else
    {
        int flag=0;
        while(p!=NULL)
        {
            if (p->empid== e_id)
            {
               flag=1;
               break;
            }
            p=p->nt;
        }
        if(flag==1 && check == 0)
        {
            if(get == 1){
                char empname[100];
                scanf("%50s",empname);
                strcpy(p->empname,empname);
            }
            if(get == 2)
            {
                int salary;
                scanf("%d",&salary);
                p->salary=salary;
            }
            if(get == 3)
            {
                int leave;
                scanf("%d",&leave);
                p->leave=leave;
            }
            if(get == 4)
            {
                char address[100];
                scanf("%50s",&address);
               strcpy(p->address,address);
            }
            if(get == 5)
            {
                char personal_mail_id[100];
                scanf("%10s",personal_mail_id);
               strcpy(p->personal_mail_id,personal_mail_id);
            }
            if(get == 6)
            {
                int phone_no;
                scanf("%d",&phone_no);
                p->phone_no=phone_no;
            }
            if(get == 7)
            {
                char marital_status[100];
                scanf("%10s",marital_status);
               strcpy(p->marital_status,marital_status);
            }
            if(get == 8)
            {
                char BU[200];
                scanf("%10s",BU);
                strcpy(p->BU,BU);
            }
            if(get == 9)
            {
                char role[200];
                scanf("%50s",role);
                strcpy(p->role,role);
            }          
        }
        return SUCCESS;
    }
}