#ifndef TAG_H
#define TAG_H
#include <iostream>
#include "Photo.h"
using namespace std;
class Tag
{
private:
    int id;
    string name;
    string remarks;

public:
    void setid(int);
    void setname(string);
    void setremarks(string);
    int getid();
    string getname();
    string getremarks();
    void includePhoto();
};
#endif