#ifndef ROBOT_NAME_H
#define ROBOT_NAME_H

#include <map>
#include <string>

namespace robot_name
{

class robot
{
public:
  robot();

  std::string name() const { return name_; }

private:
  // Name of individual robot
  std::string name_;
  // Track the names used across all robots
  static std::map<std::string, bool> names_used_;
  // Robot name generator
  std::string generate_name() const;
  // Generate a random prefix
  char rand_prefix() const;
  // Generate a random digit
  int rand_digit() const;
}; // end class robot

} // end namespace robot_name

#endif

