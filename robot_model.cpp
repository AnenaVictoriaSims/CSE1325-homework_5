#include "std_lib_facilities.h"
#include "robot_model.h"
#include "robot_parts.h"
void Robot_Model::set_name(){
  cout << "Testing the robot_model class"<<endl;
  cout <<"--------------------------------------\n";
  cout <<"Testing in the embedded robot_parts:\n";
  robot_parts.set_name("William Caballero");
}
