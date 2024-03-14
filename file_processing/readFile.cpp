#include "readFile.hpp"

#include <fstream>
#include <vector>
#include <string>

/*READ CSV FILE*/

int main(){}

size_t csv_file_contents_::getFileLength(){
    std::ifstream ifs(file_path, std::ios_base::binary);
    size_t file_size = static_cast<size_t>(ifs.tellg());
    return file_size;
}

int csv_file_contents_::defineCsv_contents_one_dim(){
    //IF FAIL TO GET FILE_CONTENTS, RETURN "0". OTHERWISE: 1
    std::ifstream ifs(file_path);
    std::string row;
    size_t s = getFileLength();

    if(s > MAXIMUM_NUMBER_OF_ROW_IN_FILES){
        return 0;
    }
    
    if(ifs.fail()){
        return 0;
    } else {
        while(getline(ifs, row)){
            csv_contents_one_dim.push_back(row);
        }
        csv_contents_one_dim.shrink_to_fit();
        return 1;
    }
}

int csv_file_contents_::deployCSVFileContentsToOneDimVector(){
    int k = defineCsv_contents_one_dim();
    return k;
}

int csv_file_contents_::deployCSVFileContentsToTwoDimVector(){
    int k = defineCsv_contents_one_dim();
    char break_letter = ',';
    unsigned int start_index = 0;
    unsigned int end_index = 0;

    std::string element;

    if(k == 0){
        return k;
    } else {
        int length_of_onedim_array_column = csv_contents_one_dim.size();

        for(unsigned int i=0;i<length_of_onedim_array_column;i++){
            element = csv_contents_one_dim[i];
            std::vector<std::string> vec;
            while(end_index + 1 < length_of_onedim_array_column){
                if(element[end_index] == break_letter){
                    vec.push_back(element.substr(start_index, end_index - start_index - 1));
                    start_index = end_index + 1;
                }
                end_index++;
            }
            csv_contents_two_dim.push_back(vec);
        }
        return k;
    }
}


std::vector<std::string> csv_file_contents_::getOneDimCSVVector(){
    return csv_contents_one_dim;
}


std::vector<std::vector<std::string>> csv_file_contents_::getTwoDimCSVVector(){
    return csv_contents_two_dim;
}


int csv_file_contents_::clearVec(){
    csv_contents_one_dim.clear();
    csv_contents_one_dim.clear();
    return 0;
}