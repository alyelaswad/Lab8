#include <iostream>
#include "Photo.h"
using namespace std;
class Member
{
private:
    int id;
    string name;
    string address;
    string contact;

public:
    void setid(int);
    void setname(string);
    void setaddress(string);
    void setcontact(string);
    int getid();
    string getname();
    string getaddress();
    string getcontact();
    void includePhoto();
};