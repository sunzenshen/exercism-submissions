#ifndef _WORD_COUNT_H
#define _WORD_COUNT_H

#include <algorithm>
#include <boost/algorithm/string.hpp>
#include <cctype>
#include <map>
#include <string>
#include <vector>

namespace {
    std::string getLowerCase(std::string phrase) {
        auto loweredPhrase = std::string(phrase);
        boost::to_lower(loweredPhrase);
        return loweredPhrase;
    }

    std::vector<std::string> getSeparateWords(std::string phrase) {
        std::vector<std::string> words;
        boost::split(words, phrase, boost::is_any_of(" \n"));
        return words;
    }

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
        auto testPhrase = getLowerCase(getStrippedPunctuation(phrase));
        for (auto word : getSeparateWords(testPhrase)) {
            if (word.length() > 0) {
                counter[word]++;
            }
        }
        return counter;
    }
}

#endif

