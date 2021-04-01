PROJECT = Calculator
SRC = calculator.c\
test_cal.c

INC = unity

TEST = unity/unity.c
$ (PROJECT).exe : $(SRC)
	gcc -I $(INC) $(SRC) $(TEST) -o $(PROJECT).exe


coverage:$(SRC)
	gcc -fprofile-arcs -ftest-coverage $< -o $(PROJ_NAME)
	./$(PROJECT)
	gcov -a $(SRC)