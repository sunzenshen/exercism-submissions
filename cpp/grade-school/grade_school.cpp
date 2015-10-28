#include "grade_school.h"

using namespace std;

namespace grade_school
{

void school::add(string const& name, int grade) {
  auto& grade_roster = roster_[grade];
  grade_roster.push_back(name);
}

Students school::grade(int grade) const {
  auto it = roster_.find(grade);
  if (it != roster_.end()) {
    return it->second;
  } else {
     return Students();
  }
}

const Roster& school::roster() const {
  return roster_;
}

} // end namespace grade_school
