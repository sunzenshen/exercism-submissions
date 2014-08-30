#ifndef BOB_H
#define BOB_H

#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

namespace {
    bool isUpperCasePresent(std::string const& statement) {
        return statement.end() !=
            std::find_if(statement.begin(), statement.end(), isalpha);
    }

    bool isLowerCasePresent(std::string const& statement) {
        return statement.end() !=
            std::find_if(statement.begin(), statement.end(), islower);
    }

    bool isShouting(std::string const& statement) {
        if (isUpperCasePresent(statement) && !isLowerCasePresent(statement)) {
            return true;
        }
        return false;
    }

    bool isQuestion(std::string const& statement) {
        auto lastCharIndex = statement.length() - 1;
        return statement[lastCharIndex] == '?';
    }

    std::string getTrimmedString(std::string const& statement) {
        auto firstPos = statement.find_first_not_of(" ");
        if (firstPos == std::string::npos) {
            return "";
        }
        auto lastPos = statement.find_last_not_of(" ");
        return statement.substr(firstPos, lastPos-firstPos+1);
    }

    bool isSilence(std::string const& statement) {
        return getTrimmedString(statement).length() == 0;
    }
}


namespace bob {
    std::string hey(std::string const& statement) {
        if (isShouting(statement)) {
            return "Woah, chill out!";
        } else if (isQuestion(statement)) {
            return "Sure.";
        } else if (isSilence(statement)) {
            return "Fine. Be that way!";
        }
        return "Whatever.";
    }
}

#endif

