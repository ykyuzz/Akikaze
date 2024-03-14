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

    bool setup_sig;

    void setUp();

    public:
};

#endif //FIELD_HPP