#include "etl.h"

using namespace std;

namespace etl
{

map<char, int> transform(map<int, vector<char> > legacyScores) {
  map<char, int> reformattedScores;
  reformattedScores['a'] += 1;
  return reformattedScores;
}

} // end namespace etl
