#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include "../field.hpp"
#include "../buffer/buffer.hpp"

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>

class display_ : public buffer_{
    private:
    std::string fillLettersIntoColumn(std::string element);
    std::vector<std::string> display;
    
    unsigned int row_position_of_starting_displaying_contents;
    unsigned int column_position_of_starting_displaying_contents;

    std::string mkSpace();

    public:
    void setFieldToDisplay();
    void showDisplay();

};

#endif //DISPLAY_HPP