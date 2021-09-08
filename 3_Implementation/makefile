
SRC = main.c\
src/delete_record.c\
src/new_record.c\
src/update_record.c\
src/view_a_record.c\
src/view_all_records.c

TEST = test/test_management.c\
unity\unity.c\
src\delete_record.c\
src\new_record.c\
src\update_record.c\
src\view_a_record.c\
src\view_all_records.c

INC = -Iinc\
-Iunity

.PHONY: all test clean

target : $(SRC) 
	gcc $(SRC) $(INC) -o all.exe

run : target
	./all.exe

test : $(TEST)
	gcc $(TEST) $(INC) -o test.exe
	./test.exe