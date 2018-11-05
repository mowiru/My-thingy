SOURCES=$(wildcard ./*.cpp)
PROJECT=big

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	g++ $(SOURCES) -o $(PROJECT)

tyle: $(PROJECT)
	./$(PROJECT) debug
