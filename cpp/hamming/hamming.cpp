#include "hamming.h"

using namespace std;

namespace hamming {

unsigned compute(string a, string b) {
  unsigned distance = 0;
  unsigned compareLen = 0;
  if (a.length()< b.length()) {
    compareLen = a.length();
  } else {
    compareLen = b.length();
  }
  for (unsigned i=0; i<compareLen; ++i) {
    if (a[i] != b[i]) {
      ++distance;
    }
  }
  return distance;
}

}

