OBJS = main.o lista.o
BYNARY = metro
CFLAGS = -g -w#banderas para el compilador de c++
#LDFLAGS = 

all: metro #cuando solo se escribe make en la terminal

metro: $(OBJS)
	g++ -o $(BYNARY) $(OBJS)

main.o: main.cpp lista.h
	g++ $(CFLAGS) -c main.cpp

lista.o: lista.cpp lista.h
	g++ $(CFLAGS) -c lista.cpp

clean: 
	rm -f $(BYNARY) $(OBJS)