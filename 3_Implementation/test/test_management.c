/**
 * @file test_management.c
 * @author Pratiksha Ramesh Gosavi (you@domain.com)
 * @brief to test library management system
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"library_management.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}
/**
 * @brief function to test enter new record function
 * 
 */

void test_enter_new_record(void){
    TEST_ASSERT_EQUAL(pass,enter_new_book(900, "Data Structures"));
}
/**
 * @brief function to test view all record function 
 * 
 */

void test_view_all_records(void){
    TEST_ASSERT_EQUAL(pass,view_all_books());
}
/**
 * @brief function to test view a record
 * 
 */

void test_view_a_record(void){
    TEST_ASSERT_EQUAL(fail,view_a_book(-2));
    TEST_ASSERT_EQUAL(pass,view_a_book(900));
}
/**
 * @brief function to test update record
 * 
 */

void test_update_record(void){
    TEST_ASSERT_EQUAL(pass,update_book(900, "issued", "16/04/21", "31/05/21", "Rahul","J", 12345));
}
/**
 * @brief function to test delete record function
 * 
 */

void test_delete_record(void){
    TEST_ASSERT_EQUAL(pass,delete_book(900));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_enter_new_record);
    RUN_TEST(test_view_a_record);
    RUN_TEST(test_update_record);
    RUN_TEST(test_delete_record);
    RUN_TEST(test_view_all_records);
    
    return UNITY_END();
}
