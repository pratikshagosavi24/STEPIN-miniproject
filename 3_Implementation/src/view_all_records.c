/**
 * @file view_all_records.c
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief Function to view all books
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_management.h"  

values view_all_books(){
    FILE *fptr;
    fptr = fopen("library_data.txt","rb");
    if(fptr==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book *book_to_find=(book*)malloc(sizeof(book));
        while(fread(book_to_find, sizeof(book), 1, fptr)!='\0'){
            printf("Book ID: %d", book_to_find->book_id);
            printf("  Title: %s\n\n", book_to_find->book_title);
        }
        fclose(fptr);
        free(book_to_find);
        return pass;
    }   
}