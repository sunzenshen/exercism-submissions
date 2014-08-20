#ifndef BOB_H
#define BOB_H

#include <cctype>
#include <string>

namespace bob {

    namespace {
        bool isAllCaps(std::string const& statement) {
            auto ret = false;
            auto strLen = statement.length();
            for (auto i=0; i<strLen; ++i) {
                if (islower(statement[i])) {
                    return false;
                }
                if (isalpha(statement[i])){
                    ret = true;
                }
            }
            return ret;
        }

        bool isQuestion(std::string const& statement) {
            auto lastCharIndex = statement.length() - 1;
            return statement[lastCharIndex] == '?';
        }

        bool isSilence(std::string const& statement) {
            return statement.length() == 0;
        }

        std::string getTrimmedString(std::string const& statement) {
            auto start = 0;
            auto strLen = statement.length() - 1;
            for ( ; start<strLen; ++start) {
                if (statement[start] != ' ') {
                    break;
                }
            }
            auto end = strLen;
            for ( ; end >0 ; --end) {
                if (statement[end] != ' ') {
                    break;
                }
            }
            if (start > end) {
                return "";
            }
            return statement.substr(start, end-start+1);
        }
    }

    std::string hey(std::string const& statement) {
        auto testStatement = getTrimmedString(statement);
        if (isAllCaps(testStatement)) {
            return "Woah, chill out!";
        } else if (isQuestion(testStatement)) {
            return "Sure.";
        } else if (isSilence(testStatement)) {
            return "Fine. Be that way!";
        }
        return "Whatever.";
    }
}

#endif

