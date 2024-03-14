#include "readConf.hpp"

#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <map>

int main(){}


void setting_::setSettingFilePath(std::string path){
    setting_file_path = path;
}


void setting_::defineEntireSetting(){
    std::ifstream ifs(setting_file_path);
    std::string row;
    std::string key;
    std::string value;
    char break_letter = '=';

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
            value = row.substr(end_index + 1, row_length - end_index);
            entire_setting.insert({key, value});
        }
    }
}


std::map<std::string, std::string>setting_::getEntireSetting(){
    return entire_setting;
}


std::string setting_::getCertainSettingFromEntireSetting(std::string key){
    return entire_setting[key];
}

int setting_::getCastedToIntSettingFromEntireSetting(std::string key){
    int v = std::stoi(entire_setting[key]);
    return v;
}


void setting_::releaseMemoryOfEntireSetting(){
    entire_setting.clear();
}


void setting_::setSettingTitle(std::string title){
    setting_title = title;
}


void setting_::defineSettingValue(){
    std::ifstream ifs(setting_file_path);
    std::string row;
    std::string value;
    char break_letter = ':';

    unsigned int start_index = 0;
    unsigned int end_index;
    unsigned int row_length;

    if(!ifs.fail()){
        while(getline(ifs, row)){
            if(row[0] == '#'){
                continue;
            }
            row_length = row.size();
            for(unsigned int i=0;i<row_length;i++){
                if(row[i] == break_letter){
                    end_index = i;
                    break;
                }
            };
            if(row.substr(0, end_index - 1) == setting_title){
                setting_value = row.substr(end_index + 1, row_length - end_index);
            } else {
                continue;
            }
        }
    }
}


std::string setting_::getSettingValue(){
    return setting_value;
}