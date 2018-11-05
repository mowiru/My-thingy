SOURCES=$(wildcard ./*.cpp)
PROJECT=farm

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	g++ $(SOURCES) -o $(PROJECT)

cow: $(PROJECT)
	./$(PROJECT) debug
