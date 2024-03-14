#ifndef READFILE_HPP
#define READFILE_HPP

#include <fstream>
#include <vector>
#include <string>

class csv_file_contents_{
    private:
    
    std::vector<std::string> csv_contents_one_dim;
    std::vector<std::vector<std::string>> csv_contents_two_dim;
    std::string file_path;

    const unsigned int MAXIMUM_NUMBER_OF_ROW_IN_FILES;

    size_t getFileLength();
    int defineCsv_contents_one_dim();

    public:
    int deployCSVFileContentsToOneDimVector();
    int deployCSVFileContentsToTwoDimVector();
    std::vector<std::string> getOneDimCSVVector();
    std::vector<std::vector<std::string>> getTwoDimCSVVector();
    int clearVec();

};

#endif // READFILE_HPP