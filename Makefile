OBJECTS=main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
HEADER= functions.h

main: $(OBJECTS)
	g++ -o main $(OBJECTS)
	
main.o: main.cpp $(HEADER)

box.o: box.cpp $(HEADER)

checkerboard.o: checkerboard.cpp $(HEADER)

cross.o: cross.cpp $(HEADER)

lower.o: lower.cpp $(HEADER)

upper.o: upper.cpp $(HEADER)

trapezoid.o: trapezoid.cpp $(HEADER)

checkerboard3x3.o: checkerboard3x3.cpp $(HEADER)

clean:
	rm -f $(OBJECTS)