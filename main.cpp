#include "std_lib_facilities.h"
#include "view.h"
#include "robot_model.h"
#include "robot_parts.h"
int main(){
	View view;
	Robot_Parts robot_parts;
	Robot_Model model1(robot_parts);
	model1.set_name();
	return 0;
}
