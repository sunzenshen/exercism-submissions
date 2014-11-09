#include "rna_transcription.h"
#include <algorithm>

using namespace std;

namespace transcription {

char to_rna(char unit) {
  char ret = '?';
  switch (unit) {
  case 'C':
    ret = 'G';
    break;
  case 'G':
    ret = 'C';
    break;
  case 'A':
    ret = 'U';
    break;
  case 'T':
    ret = 'A';
    break;
  }
  return ret;
}

string to_rna(string strand) {
  for (auto it=begin(strand); it!=end(strand); ++it) {
    *it = to_rna(*it);
  }
  return strand;
}

}
