#ifndef HAMMING_H
#define HAMMING_H

#include <string>

namespace hamming {
    unsigned compute(std::string a, std::string b) {
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

#endif

