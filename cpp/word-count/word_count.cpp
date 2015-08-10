#include <boost/algorithm/string.hpp>
#include <boost/tokenizer.hpp>
#include <map>
#include <string>
#include "word_count.h"

using namespace std;
using namespace boost;

namespace {
    string getStrippedPunctuation(string phrase) {
        string strippedPhrase;
        remove_copy_if(
            phrase.begin(),
            phrase.end(),
            back_inserter(strippedPhrase),
            ptr_fun<int, int>(&ispunct));
        return strippedPhrase;
    }
}

namespace word_count
{
    map<string,int> words(string phrase) {
        map<string, int> counter;
        auto testPhrase = to_lower_copy(getStrippedPunctuation(phrase));
        tokenizer<> tokens(testPhrase);
        for (tokenizer<>::iterator token=tokens.begin(); token!=tokens.end(); ++token) {
            if (token->length() > 0) {
                counter[*token]++;
            }
        }
        return counter;
    }
}
