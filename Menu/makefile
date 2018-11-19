#SOURCES=$(wildcard ./*.cpp)

all: Kingmenu PersonEingabe AutoEingabe
	#done

my_func: ./my_function.cpp

Kingmenu: PersonEingabe AutoEingabe
	g++ -o Kingmenu ./Kingmenu.cpp ./my_function.cpp ./human.cpp ./human_function.cpp ./people.cpp ./auto.cpp ./calc.cpp

PersonEingabe: my_func ./people.cpp

AutoEingabe: my_func ./auto.cpp

test: AutoEingabe
	./autoInput debug
