SRC = $(wildcard *.cpp)
APP = "singleton_test"

All: $(APP)
	#Making

$(APP): $(SRC)
	g++ -o $(APP) $(SRC)

test: $(APP)
	./$(APP) debug
