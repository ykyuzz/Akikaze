#ifndef BUFFER_HPP
#define BUFFER_HPP

#include "../field.hpp"
#include "../display/display.hpp"

#include <string>
#include <vector>
#include <array>

class buffer_ : public field_{
    private:
    protected:
    std::vector<unsigned int> searched_pos_l;
    

    public:
    //ファイル名関係
    void openFile(std::string file_path);
    void updateLetterInFields(char letter, unsigned int row, unsigned int column);
    void searchSymbols(std::string search_word);
    void recordCurrentCusrorPosition();
};

#endif //BUFFER_HPP