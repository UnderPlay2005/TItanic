#include <iostream>
#include "titanic.h"
#include <string>

std::string PATH = "../data/train.csv";

int main(int c, char** cc){
    strvec data;
    Titanic::readCsv(PATH, data);
    for (int i = 0; i < data.size(); i++){
        for (std::string a :data[i]){
            std::cout << a << ' ';
        }
        std::cout << '\n';
    }
}
