#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include "../field.hpp"
#include "../buffer/buffer.hpp"

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>

class display_ : public field_{
    private:
    std::string fillLettersIntoColumn(std::string element);
    std::vector<std::string> display;

    std::string mkSpace();

    public:
    void setContentsToDisplay();
    void showDisplay();

};

#endif //DISPLAY_HPP