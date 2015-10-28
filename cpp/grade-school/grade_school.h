#ifndef _GRADE_SCHOOL_H
#define _GRADE_SCHOOL_H

#include "map"
#include "string"
#include "vector"

namespace grade_school
{

typedef std::vector<std::string> Students;
typedef std::map<int, Students> Roster;

class school
{
public:
  void add(std::string const& name, int grade);

  Students grade(int grade) const;

  const Roster& roster() const;

private:
  Roster roster_;
}; // end class school

} // end namespace grade_school

#endif

