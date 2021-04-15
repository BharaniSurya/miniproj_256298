PROJ_NAME = CAR_SERVICE
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC = main.c \
src/create_profile.c \
src/create_service.c \
src/delete_profile.c \
src/end_service.c \
src/is_id_valid.c \
src/search_profile.c \
src/search_service.c \
src/update_profile.c \
src/update_service.c 

TEST_SRC = test/car_service_testing.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
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

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,./$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(SRC) $(TEST_SRC) $(INC) -lm -o $(TEST_PROJ_NAME).$(EXEC)
	./$(TEST_PROJ_NAME).$(EXEC)

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -lm -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a main.c
	$(RM) *.gcda
	$(RM) *.gcno

valgrind: all
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

clean:
	$(RM) *.gcda
	$(RM) *.gcno