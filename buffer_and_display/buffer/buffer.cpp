#include "../field.hpp"
#include "../display/display.hpp"
#include"../../file_processing/readFile.hpp"

#include <stdio.h>
#include <string>
#include <vector>
#include <array>

void buffer_::openFile(std::string file_path){
    csv_file_contents_ f(file_path);
    f.deployCSVFileContentsToTwoDimVector();
    
}