#include "beer_song.h"

using namespace std;

namespace beer {

string verse(unsigned num_bottles) {
  unsigned one_less = num_bottles - 1;
  string ret;

  if (num_bottles > 2) {
    ret = to_string(num_bottles) + " bottles of beer on the wall, " +
          to_string(num_bottles) + " bottles of beer.\nTake one down and pass it around, " +
          to_string(one_less) + " bottles of beer on the wall.\n";
  } else if (num_bottles == 2) {
    ret = "2 bottles of beer on the wall, 2 bottles of beer.\n"
          "Take one down and pass it around, 1 bottle of beer on the wall.\n";
  } else if (num_bottles == 1) {
    ret = "1 bottle of beer on the wall, 1 bottle of beer.\n"
          "Take it down and pass it around, no more bottles of beer on the wall.\n";
  } else {
    ret = "No more bottles of beer on the wall, no more bottles of beer.\n"
          "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
  }

  return ret;
}

string sing(unsigned starting_num, unsigned ending_num) {
  string rest_of_verses;
  if (starting_num > ending_num) {
    rest_of_verses = "\n" + sing(starting_num-1, ending_num);
  }
  return verse(starting_num) + rest_of_verses;
}

string sing(unsigned starting_num) {
  return sing(starting_num, 0);
}

}
