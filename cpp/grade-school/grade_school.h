#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H

#include "map"
#include "string"
#include "vector"

namespace grade_school
{

// List of students
typedef std::vector<std::string> Students;
// Roster records each grade number with a list of students
typedef std::map<int, Students> Roster;

class school
{
public:
  // Add a student and their grade into the roster
  void add(std::string const& name, int grade);

  // Get the list of students for a given grade
  Students grade(int grade) const;

  // Get the roster for the entire student body
  const Roster& roster() const;

private:
  Roster roster_;
}; // end class school

} // end namespace grade_school

#endif

