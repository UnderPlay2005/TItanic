#include "titanic.h"
#include <fstream>
#include <sstream>

void Titanic::readCsv(std::string path, strvec &table)
{        
    std::ifstream file(path);
    std::string line;
    while (!file.eof()){
        std::getline(file, line);
        std::stringstream ss(line);
        std::string field;
        std::vector<std::string> row;
        while (std::getline(ss, field, ','))
        {
            row.push_back(field);
        }
        table.push_back(row);
    }
};