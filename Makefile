OBJS = main.o lista.o
BYNARY = metro
CXX = g++
CFLAGS = -g -w#banderas para el compilador de c++
#LDFLAGS = 

all: $(BYNARY)#cuando solo se escribe make en la terminal

metro: $(OBJS)
	$(CXX) -o $(BYNARY) $(OBJS)

main.o: main.cpp lista.h
	$(CXX) $(CFLAGS) -c main.cpp

lista.o: lista.cpp lista.h
	$(CXX) $(CFLAGS) -c lista.cpp

clean: 
	rm -f $(BYNARY) $(OBJS)