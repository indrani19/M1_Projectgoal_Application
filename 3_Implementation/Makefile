#Target : Dependencies
#<TAB>commands
	
PROJ_NAME=code
SRC=src1/code_main.c\
 src1/code.c\
 
#To check if the OS is Windows or Linux and set the executable file extenstion
ifdef OS
	RM=del /q
	FixPath= $(subst /,\,$1)
	EXEC = exe
else
    ifeq ($(shell uname),Linux)
   	RM=rm -rf
	FixPath= $1
	EXEC = out
	endif
endif

INC =-Icode.h\

Build : $(SRC)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

static_analysis :
	cppcheck --enable=all -iunity . $(SRC)

dynamic_analysis : build
	valgrind ./$(call FixPath ,$(PROJ_NAME).$(EXEC))

coverage :
	gcc -fprofile-arcs -ftest-coverage $(SRC)  $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm 
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))