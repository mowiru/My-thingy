SRC = $(wildcard *.cpp)
APP = "greater_lesser"

All: $(APP)
	#Making

$(APP): $(SRC)
	g++ -o $(APP) $(SRC)

test: $(APP)
	./$(APP) debug
