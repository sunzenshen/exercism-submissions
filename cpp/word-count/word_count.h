#ifndef _WORD_COUNT_H
#define _WORD_COUNT_H

#include <map>
#include <string>

namespace word_count
{
    std::map<std::string,int> words(std::string phrase);
}

#endif
