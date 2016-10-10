
CXXFLAGS =

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: shop.o create_parts.o view.o
	$(CXX) $(CXXFLAGS) shop.o create_parts.o view.o
shop.o: shop.cpp create_parts.h view.h
	$(CXX) $(CXXFLAGS) -w -c shop.cpp
create_parts.o: create_parts.cpp create_parts.h view.h
	$(CXX) $(CXXFLAGS) -w -c create_parts.cpp
view.o: view.cpp create_parts.h view.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp
clean:
	rm -f *.o a.out
