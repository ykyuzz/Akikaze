#include "field.hpp"
#include "../setting/readConf.hpp"

#include <stdio.h>
#include <array>
#include <string>

int main(){}

//constructor
field::field(){
    setting_ setting;
    setting.setSettingFilePath("../setting/setting.conf"); //!
    setting.defineEntireSetting();
    NUMBER_OF_ROW = setting.getCastedToIntSettingFromEntireSetting("NUMBER_OF_ROW");
    NUMBER_OF_COLUMN = setting.getCastedToIntSettingFromEntireSetting("NUMBER_OF_COLUMN");
    NUMBER_OF_LETTERS_IN_COLUMN = setting.getCastedToIntSettingFromEntireSetting("NUMBER_OF_LETTERS_IN_COLUMN");
    NUMBER_OF_SPACE_BETWEEN_COLUMNS = setting.getCastedToIntSettingFromEntireSetting("NUMBER_OF_SPACE_BETWEEN_COLUMNS");

    for(size_t i=0;i<NUMBER_OF_ROW;i++){
        field_p[i] = new char[(NUMBER_OF_LETTERS_IN_COLUMN + NUMBER_OF_SPACE_BETWEEN_COLUMNS)*NUMBER_OF_COLUMN + 1];
    }
}

//destructor
field::~field() noexcept{
    delete field_p;
}

