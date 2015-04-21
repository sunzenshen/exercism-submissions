#include "nucleotide_count.h"
#include <stdexcept>

using namespace std;

namespace dna {

counter::counter(const string& sequence) {
  _nucleotide_counts['A']= 0;
  _nucleotide_counts['T']= 0;
  _nucleotide_counts['C']= 0;
  _nucleotide_counts['G']= 0;
  for (char nucleotide : sequence) {
    ++_nucleotide_counts[nucleotide];
  }
}

unsigned counter::count(char nucleotide) const {
  switch (nucleotide) {
  case 'A':
  case 'T':
  case 'C':
  case 'G':
    break;
  default:
    throw invalid_argument("count: Invalid nucleotide input");
  }
  return _nucleotide_counts.at(nucleotide);
}

map<char,int> counter::nucleotide_counts() const {
  return _nucleotide_counts;
}

}
