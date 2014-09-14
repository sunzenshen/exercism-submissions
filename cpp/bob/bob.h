#ifndef BOB_H
#define BOB_H

#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

namespace {
    bool isUpperCasePresent(std::string const& statement) {
        return std::any_of(statement.begin(), statement.end(), isupper);
    }

    bool isLowerCasePresent(std::string const& statement) {
        return std::any_of(statement.begin(), statement.end(), islower);
    }

    bool isShouting(std::string const& statement) {
        return isUpperCasePresent(statement) && !isLowerCasePresent(statement);
    }

    bool isQuestion(std::string const& statement) {
        return statement.back() == '?';
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
        if (isSilence(statement)) {
            return "Fine. Be that way!";
        } else if (isShouting(statement)) {
            return "Woah, chill out!";
        } else if (isQuestion(statement)) {
            return "Sure.";
        }
        return "Whatever.";
    }
}

#endif

