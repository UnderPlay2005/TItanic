#ifndef TITANIC
#define TITANIC
#include <iostream>
#include <string>
#include <vector>

//typedef std::vector<std::vector<std::string>> strvec;
using strvec = std::vector<std::vector<std::string>>;

class Titanic
{
    public:
    static void readCsv(std::string path, strvec &table);
};
#endif
