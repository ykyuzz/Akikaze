#ifndef READCONF_HPP
#define READCONF_HPP

#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <map>

class setting{
    private:
    //FOR DEMAND THAT ENTIRE CONFIGRATION DATA IS REQUIRED
    std::map<std::string, std::string> entire_setting;
    //FOR DEMAND THAT ONE OF CONFIGRATION IS REQUIRED
    std::string setting_title;
    std::string setting_value;

    std::string setting_file_path;

    public:
    //FOR ALL
    void setSettingFilePath(std::string path);
    //FOR GETTING ENTIRE SETTINGS
    void defineEntireSetting();
    void getEntireSetting();
    void releaseMemoryOfEntireSetting();
    //FOR GETTING ONT OF SETTINGS
    void setSettingTitle();
    void defineSettingValue();
    void getSettingValue();
};

#endif //READCONF_HPP