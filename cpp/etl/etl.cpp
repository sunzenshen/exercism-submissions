#include "etl.h"

using namespace std;

namespace etl
{

// Transform record of Scrabble scores from being score index to letter indexed
map<char, int> transform(map<int, vector<char> > legacyScores) {
  map<char, int> reformattedScores;
  for (auto lettersPerScore : legacyScores) {
    int scoreForTheseLetters = lettersPerScore.first;
    vector<char>& letters = lettersPerScore.second;
    for (auto letter : letters) {
      reformattedScores[tolower(letter)] = scoreForTheseLetters;
    }
  }
  return reformattedScores;
}

} // end namespace etl
