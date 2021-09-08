/**
 * @file delete_record.c
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief function for deleting a book 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"library_management.h"

values delete_book(int id){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("library_data.txt","rb");
    fptr2 = fopen("temp_data.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book *discarded_book = (book*)malloc(sizeof(book));
        while(fread(discarded_book, sizeof(book), 1, fptr1)!='\0'){
            if(id==discarded_book->book_id){
               continue;
            }
            fwrite(discarded_book, sizeof(book), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        free(discarded_book);
        remove("library_data.txt");
        rename("temp_data.txt", "library_data.txt");  
        return pass;
    }   
}