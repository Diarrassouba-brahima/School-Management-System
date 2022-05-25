#include <stdio.h>
#include <stdlib.h>
void admi();
void depart();
void teachers();
void student();

void admi()
{
    system("cls");
    printf("\n\t1. PRESIDENT");
    printf("\n\t2. VICE PRESIDENT");
    printf("\n\t3. CHIEF OF DEPARTMENT");
    printf("\n\t4. STUDENTS PRESIDENT");
    printf("\n\t5. EXIT ");
}
void depart()
{
    system("cls");
   printf("\n\t1. DEPARTMENT OF CSE ");
    printf("\n\t2. DEPARTMENT OF EEE");
    printf("\n\t3. DEPARTMENT MPE ");
    printf("\n\t4. DEPARTMENT OF MPE");
    printf("\n\t5. EXIT ");
}
void teachers()
{
   printf("\n\t1. THE TEACHERS ");
    printf("\n\t2. EXIT ");
}
void student()
{
   int opt;
            system("cls");
    printf("\n*************************************************");
    printf("\n\tWELCOME TO THE MAIN MENU OF STUDENT");
    printf("\n*************************************************");
    printf("\n\t1. FISRT YEAR ");
    printf("\n\t2. SECOND YEAR ");
    printf("\n\t3. THIRD YEAR ");
    printf("\n\t4. FOURTH YEAR ");
    printf("\n\t5. EXIT ");

}
int main ()
{
     int opt,n,year,Id,pw;


    system("cls");
    printf("\n*************************************************");
    printf("\n\tMAIN SCHOOL-STAFF INFORMATION SYSTEM");
    printf("\n*************************************************");
    printf("\n\t1. ADMINISTRATOIN");
    printf("\n\t2. DEPARTEMENT");
    printf("\n\t3. TEACHERS");
     printf("\n\t4. STUDENTS");
    printf("\n\t5. EXIT");
    printf("\n*************************************************");
    printf("\n\tPlease enter your option : ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        {
     admi();
    break;
        }
    case 2:
        {
   depart();
    break;
        }
    case 3:
        {
      teachers();
             break;
        }
    case 4:
        {
            system("cls");
            student();
        printf("\n\tPlease enter your school year : ");
        scanf("%d", &opt);
    if(opt==1)
    {
         system("cls");
        printf("\n\n*************************************************");
        printf("\n\tALL PROGRAMM OF FIRST YEAR");
        printf("\n*************************************************");
        printf("\n\t::login your account::");
        printf("\n\n\tenter your id : ");
        scanf("%d",&Id);
        printf("enter your password : ");
        scanf("%d",&pw);
        break;
    }
    else
    {
        if(opt==2)
        {

        printf("\n\n*************************************************");
        printf("\n\tALL PROGRAMM OF SECOND YEAR");
        printf("\n*************************************************");
            printf("\nsecond year");
        }

         else
    {
        if(opt==3)
        {

        printf("\n\n*************************************************");
        printf("\n\tALL PROGRAMM OF THIRD YEAR");
        printf("\n*************************************************");
        printf("\n\tlogin your account");
            printf("enter your id : ");
            scanf("%d",&Id);
            printf("enter your password : ");
        }
    }
    }
    if(opt==4)
    {

        printf("\n\n*************************************************");
        printf("\n\tALL PROGRAMM OF FOURTH YEAR");
        printf("\n*************************************************");
        printf("\nfourth year");
        break;
    }
    else
    {


        if(opt==5)
        {
            printf("\n\t1. EXIT ");
            break;
        }
    }
    if(opt==6)
    {
        main();
    }


        }
    case 5:
        {
             exit ;
            break;
        }
    default :
        {
            printf("\n\t1. invalide option try again ");
        }
    }

    return 0;

}
