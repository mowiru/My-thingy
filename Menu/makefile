#SOURCES=$(wildcard ./*.cpp)

all: PersonEingabe AutoEingabe
	#making

my_func: ./my_function.cpp
	#Fettisch

PersonEingabe: my_func ./main.cpp
	g++ -o persoInput ./main.cpp ./my_function.cpp

AutoEingabe: my_func ./auto.cpp
	g++ -o autoInput ./auto.cpp ./my_function.cpp

test: AutoEingabe
	./autoInput debug
