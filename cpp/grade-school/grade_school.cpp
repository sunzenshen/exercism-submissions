#include "grade_school.h"

using namespace std;

namespace grade_school
{

void school::add(string const& name, int grade) {
  auto& grade_roster = roster_[grade];
  grade_roster.push_back(name);
}

const Roster& school::roster() const {
  return roster_;
}

} // end namespace grade_school
