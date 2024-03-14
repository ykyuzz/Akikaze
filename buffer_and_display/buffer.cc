#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>

class Setting{
    protected:
    static const unsigned int NUMBER_OF_ROW = 9;
    static const unsigned int NUMBER_OF_COLUMN = 18;
    static const unsigned int NUMBER_OF_LETTERS_IN_COLUMN = 10;
    
    static const unsigned short NUMBER_OF_SPACE_BETWEEN_COLUMNS = 2;
};

class Buffer : public Setting{
    private:
    std::array<std::array<char, (NUMBER_OF_LETTERS_IN_COLUMN + NUMBER_OF_SPACE_BETWEEN_COLUMNS) * NUMBER_OF_ROW>, NUMBER_OF_COLUMN> Buffer;

    const unsigned int start_row_pos = 0;
    const unsigned int start_column_pos = 0;

};