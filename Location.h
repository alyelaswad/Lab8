#include <iostream>
#include "Photo.h"
using namespace std;
class Location
{
private:
    int id;
    string name;
    string remarks;
    Photo *parent;

public:
    void setid(int);
    void setname(string);
    void setremarks(string);
    int getid();
    string getname();
    string getremarks();
    void otherPhotos();
};