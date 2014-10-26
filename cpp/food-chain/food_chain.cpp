#include "food_chain.h"

using namespace std;

namespace food_chain {

struct animal_entry {
  string animal;
  string remark;
  string why;
};

animal_entry animal_roster[] = {
  {
    "fly",
    "",
    "I don't know why she swallowed the fly. Perhaps she'll die.\n"
  },
  {
    "spider",
    "It wriggled and jiggled and tickled inside her.\n",
    "She swallowed the spider to catch the fly.\n"
  },
  {
    "bird",
    "How absurd to swallow a bird!\n",
    "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
  },
  {
    "cat",
    "Imagine that, to swallow a cat!\n",
    "She swallowed the cat to catch the bird.\n"
  },
  {
    "dog",
    "What a hog, to swallow a dog!\n",
    "She swallowed the dog to catch the cat.\n"
  },
  {
    "goat",
    "Just opened her throat and swallowed a goat!\n",
    "She swallowed the goat to catch the dog.\n"
  },
  {
    "cow",
    "I don't know how she swallowed a cow!\n",
    "She swallowed the cow to catch the goat.\n"
  },
  {
    "horse",
    "She's dead, of course!\n",
    ""
  }
};

string verse(unsigned verse_num) {
  int i = verse_num - 1;

  string ret = "I know an old lady who swallowed a " +
               animal_roster[i].animal +
               ".\n" +
               animal_roster[i].remark +
               animal_roster[i].why;

  if (i < 7) {
    for (--i; i>=0; --i) {
      ret += animal_roster[i].why;
    }
  }

  return ret;
}

std::string verses(unsigned start_verse, unsigned end_verse) {
  string ret;

  for (unsigned i=start_verse; i<=end_verse; ++i) {
      ret = ret + verse(i) + "\n";
  }

  return ret;
}

std::string sing() {
  return verses(1,8);
}

}

