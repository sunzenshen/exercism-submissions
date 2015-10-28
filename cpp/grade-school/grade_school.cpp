#include "grade_school.h"

using namespace std;

namespace grade_school
{

void school::add(string const& name, int grade) {
  auto& grade_roster = roster_[grade];
  // Insert student into a grade's roster, maintaining alphabetical order
  auto it = std::lower_bound(grade_roster.begin(), grade_roster.end(), name);
  grade_roster.insert(it, name);
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
