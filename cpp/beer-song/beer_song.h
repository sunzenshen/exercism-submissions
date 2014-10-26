#ifndef _BEER_SONG_H
#define _BEER_SONG_H

#include <string>

namespace beer {

std::string verse(unsigned num_bottles);
std::string sing(unsigned starting_num, unsigned ending_num);
std::string sing(unsigned starting_num);

}

#endif

