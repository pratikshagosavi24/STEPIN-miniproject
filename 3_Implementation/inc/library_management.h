/**
 * @file library_management.h
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief library header file
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LIBRARY_MANAGEMENT_H__
#define __LIBRARY_MANAGEMENT_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book 
{
    int book_id;
    char book_title[20];
    char status[10];
    char member_first_name[10];
    char member_last_name[10];
    int member_id;
    char date_of_issue[10];
    char due_date[10];
}book;

typedef enum values {
    pass = 1,
    fail = 0
}values;
/**
 * @brief function to view a book
 * 
 * @param id book id
 * @return 1 / 0
 */


values view_a_book(int id);
/**
 * @brief fuction to enter  new book
 * 
 * @param id book id
 * @param title book name
 * @return 1 /0 
 */

values enter_new_book(int id, char title[]);
/**
 * @brief function to update record of book
 * 
 * @param id book id
 * @param new_status available or unavailable
 * @param new_date_of_issue issue date of book
 * @param new_due_date due date
 * @param new_member_first_name first name of member
 * @param new_member_last_name last name of member
 * @param new_member_id id of member
 * @return 1 or 0 
 */

values update_book(int id, char new_status[], char new_date_of_issue[], char new_due_date[], char new_member_first_name[],char new_member_last_name[], int new_member_id);
/**
 * @brief function to delete book
 * 
 * @param id book id
 * @return 1 or 0
 */

values delete_book(int id);
/**
 * @brief function to view all books
 * 
 * @return 1 or 0
 */

values view_all_books();

#endif

