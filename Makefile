CXX = g++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=brainfuckInterpreter

all: ${BINARIES}

brainfuckInterpreter: brainfuckInterpreter.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


clean:
	/bin/rm -f ${BINARIES} *.o
