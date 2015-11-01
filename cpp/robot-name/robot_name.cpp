#include "robot_name.h"

using namespace robot_name;
using namespace std;

robot::robot() {
  name_ = generate_name();
}

string robot::generate_name() const {
  return "AB123";
}
