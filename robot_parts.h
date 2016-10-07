#ifndef __ROBOT_PARTS_H
#define __ROBOT_PARTS_H 2016
class Robot_Parts {
  public:
    string get_name();
    void set_name(string name);
  private:
    string name="";
    int part_number;
    string component_type="";
    double weight;
    double cost;
    string description="";
};
#endif
