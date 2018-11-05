SOURCES=$(wildcard ./*.cpp)
PROJECT=hw

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	g++ $(SOURCES) -o $(PROJECT)

test: $(PROJECT)
	./$(PROJECT) debug
