/**
 * @file main.c
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief main function of library management system
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"library_management.h"  


int main()
{
    
    while(1){
    int ch, True, ID, new_member_id;
    char new_status[10], new_date_of_issue[10], new_due_date[10], new_member_first_name[10],new_member_last_name[10], new_title[20];
    printf("\t\t\t1. Add books\n\t\t\t2. View books\n\t\t\t3. Search books\n\t\t\t4. Update book records\n\t\t\t5. Delete books\n\t\t\t0 for EXIT\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    if(ch == 1)
    {
        printf("Enter the book id\n");
        scanf("%d",&ID);
        fflush(stdin);
        printf("Enter name of the book\n");
        gets(new_title);
        True = enter_new_book(ID, new_title);
    }
    else if(ch == 2)
    {
        True = view_all_books();
    }
    else if(ch == 3)
    {
        printf("Enter the book id to search\n");
        scanf("%d",&ID);
        True = view_a_book(ID);
    }
    else if(ch == 4)
    {
        printf("Enter the book id to update\n");
        scanf("%d",&ID);
        True = view_a_book(ID);
        if(True == 1){
            printf("Enter new status\n");
            scanf("%s", new_status);
            printf("Enter new date of issue\n");
            scanf("%s", new_date_of_issue);
            printf("Enter new due date\n");
            scanf("%s", new_due_date);
            printf("Enter first name of member\n");
            scanf("%s", new_member_first_name);
            printf("Enter last name of member\n");
            scanf("%s", new_member_last_name);
            printf("Enter member ID\n");
            scanf("%d", &new_member_id);
            True=update_book(ID, new_status, new_date_of_issue, new_due_date, new_member_first_name,new_member_last_name, new_member_id);
        }
    }
    else if (ch==5)
    {
        printf("Enter book id to delete\n");
        scanf("%d",&ID);
        True=delete_book(ID);
    }
    else if (ch==0)
    {
        printf("thank you\n");
        printf("************************************************************************************");
        break;
    }
    else
    {
        printf("Wrong option chosen\n");
    }



    if(True == pass)
    {
        printf("\t\t***successful***\t\t\n");
    }
    else if(True == fail)
    {
        printf("\t\t###unseccessful###\t\t\n");
        break;
    }
    else
    {
        printf("\t\tError\t\t\n");
        break;
    }
    
}
return 0;
}
