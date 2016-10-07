#ifndef __ROBOT_MODEL_H
#define __ROBOT_MODEL_H 2016

#include "robot_parts.h"
class Robot_Model {
  public:
    Robot_Model (Robot_Parts& parts) : robot_parts(parts) { }
    string get_name();
    string get_type();
    void set_name();
    void set_type();
  private:
    string name();
    string model_type();
    Robot_Parts& robot_parts;
};
#endif
