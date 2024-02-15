#example from lab general structure for makefile 
#test: main.o helpers.o
#	g++ -o test main.o helpers.o
#main.o: main.cpp
#	g++ -c main.cpp
#helpers.o: helpers.cpp helpers.h
#	g++ -c helpers.cpp

# Kyle Sappington Ricardo Rodriguez
# inspired by slide 51 on intro lecture slides
averager: main.o myfunctions.o
	g++ -o averager main.o myfunctions.o -g

main.o: main.cpp myfunctions.h
	g++ -c main.cpp -g

myfunctions.o: myfunctions.h myfunctions.cpp
	g++ -c myfunctions.cpp -g

clean:
	rm *.o averager
