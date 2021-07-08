PROJECT_NAME = STRING_FINDER

SRC = string_finder.c

TEST_SRC = unity.c\
test_string_finder.c


all: $(SRC) $(TEST_SRC)
	gcc  $^ -o $(PROJECT_NAME).out

run: all
	./$(PROJECT_NAME).out


clean:
	rm -rf *.out *.o
