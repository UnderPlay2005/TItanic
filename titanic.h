#ifndef TITANIC
#define TITANIC
#include <iostream>
#include <string>
#include <vector>

//typedef std::vector<std::vector<std::string>> strvec;
using strvec = std::vector<std::vector<std::string>>;

enum class CSV_FIELDS
{
    PassengerId, Survived, Pclass, Name, Sex, Age, SibSp, Parch, Ticket, Fare, Cabin, Embarked
};

struct Human
{
    bool isSurvived;
    int pclass;
    std::string Name;
    bool isMale;
    int Age;
};

class Titanic
{
    public:
    static void readCsv(const std::string &path, strvec &table);
    Titanic(const strvec &table);
    friend std::ostream& operator <<(std::ostream& ostream, const Titanic& t);

    private:
    std::vector<Human> _passangers;
};

std::ostream& operator <<(std::ostream& ostream, const Human& h);



#endif
