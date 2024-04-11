#include "titanic.h"
#include <fstream>
#include <sstream>

void Titanic::readCsv(const std::string &path, strvec &table)
{        
    std::ifstream file(path);
    std::string line;
    std::getline(file, line);
    while (!file.eof()){
        std::getline(file, line);
        std::stringstream ss(line);
        std::string field;
        std::vector<std::string> row;
        while (std::getline(ss, field, ','))
        {
            if (field.empty())
            {
                field = "0";
            }
            row.push_back(field);
        }
        table.push_back(row);
    }
};

Titanic::Titanic(const strvec &table)
{
    for (int i = 0; i < table.size(); i++)
    {

        try{
        Human h{0,0,
            // std::stoi(table[i][static_cast<int>(CSV_FIELDS::Survived)]), 
                // std::stoi(table[i][static_cast<int>(CSV_FIELDS::Pclass)]),
                table[i][static_cast<int>(CSV_FIELDS::Name)],
               ("male" == table[i][static_cast<int>(CSV_FIELDS::Sex)]),
                // std::stoi(table[i][static_cast<int>(CSV_FIELDS::Age)])};
                0};
        _passangers.push_back(h);
        }
        catch(...){
            std::cout << "here";
        }
    }


    std::cout << _passangers[0].Name;
};

std::ostream& operator <<(std::ostream& ostream, const Human& h)
{
    ostream << h.Name << ' ' << h.isSurvived << '\n';
    return ostream;
};

std::ostream& operator <<(std::ostream& ostream, const Titanic& t)
{
    for (int i = 0; i < t._passangers.size(); i++){
        ostream << t._passangers[i];
    }
    return ostream;
};