#SOURCES=$(wildcard ./*.cpp)

all: Kingmenu PersonEingabe AutoEingabe
	#done

my_func: ./my_function.cpp

Kingmenu: PersonEingabe AutoEingabe
	g++ -o Kingmenu ./my_function.cpp ./Kingmenu.cpp ./objects.cpp ./human.cpp ./human_function.cpp

PersonEingabe: my_func ./people.cpp

AutoEingabe: my_func ./auto.cpp

test: AutoEingabe
	./autoInput debug
