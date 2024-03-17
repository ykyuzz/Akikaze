#ifndef FIELD_HPP
#define FIELD_HPP

#include <array>
#include <stdio.h>
#include <string>
#include <vector>

class field_{
    protected:
    unsigned int NUMBER_OF_ROW;
    unsigned int NUMBER_OF_COLUMN;
    unsigned int NUMBER_OF_LETTERS_IN_COLUMN;
    unsigned int NUMBER_OF_SPACE_BETWEEN_COLUMNS;
    unsigned int START_ROW_POSITION;
    unsigned int START_COLUMN_POSITION;
    bool IS_ZENKAKU_BASED;
    bool IS_SHOWING_COLUMN_NUMBER;
    bool IS_SHOWING_ROW_NUMBER;

    char** field = new char*[NUMBER_OF_ROW + 1];
    std::vector<std::vector<std::string>> contents;

    public:
    field_();
    ~field_();
};

#endif //FIELD_HPP