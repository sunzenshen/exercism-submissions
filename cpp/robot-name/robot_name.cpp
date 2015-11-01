#include "robot_name.h"
#include <stdlib.h>
#include <sstream>

using namespace robot_name;
using namespace std;

// static name record used across all robots
map<string, bool> robot::names_used_;

robot::robot() {
  name_ = generate_name();
}

string robot::generate_name() const {
  string candidate_name = "PR070"; // "PROTO" as the first robot name
  // Search for unused name
  while (names_used_[candidate_name] != false) {
    // Generate name from random prefix and digits
    stringstream ss;
    ss << rand_prefix() << rand_prefix() << rand_digit() << rand_digit() << rand_digit();
    ss >> candidate_name;
  }
  // Add newly generated name to record of used names
  names_used_[candidate_name] = true;
  return candidate_name;
}

char robot::rand_prefix() const {
  char prefixes[] = "ABCDEFGHIJKLMNOPQRSTUNWXYZ";
  return prefixes[rand() % sizeof(prefixes)];
}

int robot::rand_digit() const {
  return rand() % 10;
}
