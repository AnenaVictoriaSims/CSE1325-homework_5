
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: main.o view.o 
	$(CXX) $(CXXFLAGS) main.o view.o
main.o: main.cpp view.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c main.cpp
view.o: view.cpp view.h view.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp
clean:
	rm -f *.o a.out
