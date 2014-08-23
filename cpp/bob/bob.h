#ifndef BOB_H
#define BOB_H

#include <cctype>
#include <string>

namespace bob {

    namespace {
        bool isShouting(std::string const& statement) {
            auto ret = false;
            auto strLen = statement.length();
            for (auto letter : statement) {
                if (islower(letter)) {
                    return false;
                }
                if (isalpha(letter)){
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
            auto firstPos = statement.find_first_not_of(" ");
            if (firstPos == std::string::npos) {
                return "";
            }
            auto lastPos = statement.find_last_not_of(" ");
            return statement.substr(firstPos, lastPos-firstPos+1);
        }
    }

    std::string hey(std::string const& statement) {
        auto testStatement = getTrimmedString(statement);
        if (isShouting(testStatement)) {
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

