CXX = g++

CXXFLAGS = -g

BINARY = hw09

TARFILE = hw09.tar

all: $(BINARY)

$(BINARY):
	$(CXX) $(CXXFLAGS) hw09.cpp -o $(BINARY)
clean:
	rm -rf $(BINARY) $(TARFILE)
tar:
	tar cf $(TARFILE) Makefile hw09.scr hw09.cpp