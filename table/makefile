SOURCES=$(wildcard ./*.cpp)
PROJECT=table

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	g++ $(SOURCES) -o $(PROJECT)

row: $(PROJECT)
	./$(PROJECT) debug
