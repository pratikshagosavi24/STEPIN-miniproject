PROJECT_NAME = Stepin

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

INC_HEADER = inc
INC_TEST = unity

INC = -Iinc\
-Iunity

.PHONY: all test clean

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)

target : $(SRC) 
	gcc $(SRC) $(INC) -o all.exe

run : target
	./all.exe

test : $(TEST)
	gcc $(TEST) $(INC) -o test.exe
	./test.exe


clean:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.gcov
