SOURCES=$(wildcard ./*.cpp)
PROJECT=bottle

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	#git pull
	g++ $(SOURCES) -o $(PROJECT)

beer: $(PROJECT)
	./$(PROJECT) debug
