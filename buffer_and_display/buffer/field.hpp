#ifndef FIELD_HPP
#define FIELD_HPP

#include <array>
#include <stdio.h>
#include <string>

class field{
    private:
    unsigned int NUMBER_OF_ROW;
    unsigned int NUMBER_OF_COLUMN;
    unsigned int NUMBER_OF_LETTERS_IN_COLUMN;
    unsigned int NUMBER_OF_SPACE_BETWEEN_COLUMNS;

    char** field_p = new char*[NUMBER_OF_ROW + 1];

    public:
    field();
    ~field();
    
};

#endif //FIELD_HPP