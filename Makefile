
CXXFLAGS =

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: main.o view.o robot_model.o robot_parts.o
	$(CXX) $(CXXFLAGS) main.o view.o robot_model.o robot_parts.o
main.o: main.cpp view.h robot_model.h robot_parts.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c main.cpp
view.o: view.cpp view.h view.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp
robot_model.o: robot_model.cpp view.h robot_parts.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_model.cpp
robot_parts.o: robot_parts.cpp view.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_parts.cpp
clean:
	rm -f *.o a.out
