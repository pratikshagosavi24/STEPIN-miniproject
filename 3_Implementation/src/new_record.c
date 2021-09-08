/**
 * @file new_record.c
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief function for adding new book
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_management.h"

values enter_new_book(int id, char title[]){
    FILE *fptr;
    fptr = fopen("library_data.txt","ab");
    if(fptr==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book *new_book = (book*)malloc(sizeof(book));
        new_book->book_id = id;
        strcpy(new_book->book_title, title);
        strcpy(new_book->status, "Available");
        strcpy(new_book->member_first_name, "N/A");
        strcpy(new_book->member_last_name, ".");
        new_book->member_id=0;
        strcpy(new_book->date_of_issue,"N/A");
        strcpy(new_book->due_date,"N/A");
        fwrite(new_book, sizeof(book), 1, fptr);
        fclose(fptr);
        free(new_book);
        return pass;
    }
}