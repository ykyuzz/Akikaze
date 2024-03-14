#include "readConf.hpp"

#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <map>

int main(){}

void setting::setSettingFilePath(std::string path){
    setting_file_path = path;
}

void setting::defineEntireSetting(){
    std::ifstream ifs(setting_file_path);
    std::string row;
    std::string key;
    std::string value;
    char break_letter = ':';

    unsigned int start_index = 0;
    unsigned int end_index;
    unsigned int row_length;

    if(!ifs.fail()){
        while(getline(ifs, row)){
            row_length = row.size();
            for(unsigned int i=0;i<row_length;i++){
                if(row[i] == break_letter){
                    end_index = i;
                    break;
                }
            };
            key = row.substr(0, end_index - 1);
            value = 
        }
    }
}