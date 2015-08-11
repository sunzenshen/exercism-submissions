#ifndef _BEER_SONG_H
#define _BEER_SONG_H

#include <string>

namespace beer {

std::string verse(size_t num_bottles);
std::string sing(size_t starting_num, size_t ending_num=0);

}

#endif

