SOURCES=$(wildcard ./*.cpp)
PROJECT=menu

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	g++ $(SOURCES) -o $(PROJECT)

list: $(PROJECT)
	./$(PROJECT) debug
