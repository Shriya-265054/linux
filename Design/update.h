#ifndef __UPDATE_H__
#define __UPDATE_h__

#include<stdio.h>
#include<string.h>
#include<malloc.h>

typedef enum user{
    SUCCESS = 0,
    NO_EMPACC_EXIST = 2,
    EMPID_DOESNT_EXISTS = 5,
    EMPID_EXIST = 1
}user;

typedef struct info{
    char empname[60];
    int empid;
    int salary;
    int leave;
    char address[60];
    char personal_mail_id[15];
    int phone_no;
    char marital_status[10];
    char BU[50];
    char role[30];
    struct info *nt;
}info;

user update(info *,int,int,int);
user search_by_empid(info *, int , info *);

#endif