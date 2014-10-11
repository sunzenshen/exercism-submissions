#include <algorithm>
#include "hamming.h"

using namespace std;

namespace hamming {

unsigned compute(string a, string b) {
  unsigned distance = 0;
  unsigned compareLen = 0;
  compareLen = min(a.length(), b.length());
  for (unsigned i=0; i<compareLen; ++i) {
    if (a[i] != b[i]) {
      ++distance;
    }
  }
  return distance;
}

}

