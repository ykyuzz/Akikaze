#include "../setting/readConf.hpp"
#include "../field.hpp"
#include "../buffer/buffer.hpp"

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>


std::string display_::fillLettersIntoColumn(std::string element){
    unsigned int element_size = element.size();
    std::string r_ele;

    if(element_size == NUMBER_OF_LETTERS_IN_COLUMN){
        r_ele = element;
    } else if(element_size > NUMBER_OF_LETTERS_IN_COLUMN){
        r_ele = element.substr(0, NUMBER_OF_LETTERS_IN_COLUMN);
    } else if(element_size < NUMBER_OF_LETTERS_IN_COLUMN){
        while(element_size < NUMBER_OF_LETTERS_IN_COLUMN){
            element = element + ' ';
            element_size++;
        }
        r_ele = element;
    }
    return element;
}


void display_::setContentsToDisplay(){
    std::string row;
    int row_pos;
    int column_pos;

    for(int i=0;i<NUMBER_OF_ROW;i++){
        for(int j=0;j<NUMBER_OF_COLUMN;j++){

        }
    }
}