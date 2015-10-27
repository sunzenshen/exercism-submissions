#ifndef _GRADE_SCHOOL_H
#define _GRADE_SCHOOL_H

#include "map"
#include "vector"

namespace grade_school
{

class school
{
public:
  const std::map<int, std::vector<std::string> >& roster() const {
    return roster_;
  }

private:
  std::map<int, std::vector<std::string> > roster_;
}; // end class school

} // end namespace grade_school

#endif

