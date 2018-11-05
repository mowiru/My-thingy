SOURCES=$(wildcard ./*.cpp)
PROJECT=number

all: $(PROJECT)
	echo making

$(PROJECT): $(SOURCES)
	#git pull
	g++ $(SOURCES) -o $(PROJECT)

num: $(PROJECT)
	./$(PROJECT) debug
