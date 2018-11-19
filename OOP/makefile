SRC = $(wildcard *.cpp)
APP = classTest

all: $(APP)
	#done

fresh:
	rm -f ./$(APP)

$(APP): fresh $(SRC)
	g++ -o $(APP) $(SRC)

test: $(APP)
	./$(APP) debug
