#ifndef _WORD_COUNT_H
#define _WORD_COUNT_H

#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <boost/tokenizer.hpp>
#include <cctype>
#include <map>
#include <string>
#include <vector>

namespace {
    std::string getStrippedPunctuation(std::string phrase) {
        std::string strippedPhrase;
        std::remove_copy_if(
            phrase.begin(),
            phrase.end(),
            std::back_inserter(strippedPhrase),
            std::ptr_fun<int, int>(&std::ispunct));
        return strippedPhrase;
    }
}

namespace word_count
{
    std::map<std::string,int> words(std::string phrase) {
        std::map<std::string, int> counter;
        auto testPhrase = boost::to_lower_copy(getStrippedPunctuation(phrase));
        boost::tokenizer<> tokens(testPhrase);
        for (boost::tokenizer<>::iterator token=tokens.begin(); token!=tokens.end(); ++token) {
            if (token->length() > 0) {
                counter[*token]++;
            }
        }
        return counter;
    }
}

#endif

