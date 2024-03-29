#ifndef SETTING_HPP
#define SETTING_HPP

#include <stdio.h>
#include <fstream>
#include <string>
#include <map>

class setting_{
    private:
    //FOR DEMAND THAT ENTIRE CONFIGRATION DATA IS REQUIRED
    std::map<std::string, std::string> entire_setting;
    //FOR DEMAND THAT ONE OF CONFIGRATION IS REQUIRED
    std::string setting_title;
    std::string setting_value;

    std::string setting_file_path;

    public:
    //FOR ALL
    setting_(std::string path);

    void setSettingFilePath(std::string path);

    //FOR GETTING ENTIRE SETTINGS
    void defineEntireSetting();
    std::map<std::string, std::string> getEntireSetting();
    std::string getCertainSettingFromEntireSetting(std::string key);
    int getCastedToIntSettingFromEntireSetting(std::string key);
    void releaseMemoryOfEntireSetting();

    //FOR GETTING ONT OF SETTINGS
    void setSettingTitle(std::string title);
    void defineSettingValue();
    int getCastedToIntSettingFromCertainSetting();
    std::string getSettingValue();
};

#endif //SETTING_HPP