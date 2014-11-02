#ifndef _NUCLEOTIDE_COUNT_H
#define _NUCLEOTIDE_COUNT_H

#include <map>
#include <string>

namespace dna {

class counter {
public:
  counter() {};
  counter(std::string sequence);
  unsigned count(char nucleotide) const;
  std::map<char,int> nucleotide_counts() const;
private:
  std::string _sequence;
  std::map<char, int> _nucleotide_counts;
};

}
#endif

