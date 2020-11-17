CXX = g++
CXXFLAGS = -g
OBJS = TestMyPolynomial.o MyTerm.o MyPolynomial.o
TARGET = main
.PHONY: all clean

all: $(TARGET)
	del *.o

clean:
	del *.exe

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

TestMyPolynomial.o: MyTerm.h MyPolynomial.h TestMyPolynomial.cpp
MyTerm.o: MyTerm.h MyTerm.cpp
MyPolynomial.o: MyTerm.h MyPolynomial.h MyPolynomial.cpp
