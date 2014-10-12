#include "anagram.h"
#include "algorithm"
#include "boost/algorithm/string/case_conv.hpp"

using namespace std;

namespace anagram {

anagram::anagram(const string& subject)
: subject_(subject),
  key_(generateKey(subject))
{}

string anagram::generateKey(const string& subject) const {
  string key(boost::to_lower_copy(subject));
  sort(key.begin(), key.end());
  return key;
}

bool anagram::isAnagram(const string& candidate) const {
  return (candidate.length() == key_.length()) &&
         (key_ == generateKey(candidate)) &&
         (boost::to_lower_copy(subject_) != boost::to_lower_copy(candidate));
}

vector<string> anagram::matches(const vector<string>& candidates) {
  vector<string> hits;
  for(string candidate : candidates) {
    if (isAnagram(candidate)) {
      hits.push_back(candidate);
    }
  }
  return hits;
}

}
