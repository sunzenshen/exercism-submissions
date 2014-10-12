#ifndef _ANAGRAM_H
#define _ANAGRAM_H

#include <string>
#include <vector>

namespace anagram {

class anagram {
public:
  anagram(const std::string& subject);

  std::vector<std::string> matches(const std::vector<std::string>& candidates);

private:
  std::string subject_;
  std::string key_;

  std::string generateKey(const std::string& subject) const;
  bool isAnagram(const std::string& candidate) const;
};

}

#endif
