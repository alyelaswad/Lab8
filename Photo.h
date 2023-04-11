#ifndef PHOTO_H
#define PHOTO_H
#include <iostream>
#include "Album.h"
#include "Tag.h"
#include "Member.h"
#include "Location.h"
using namespace std;
class Photo
{
private:
    int id;
    string name;
    string remarks;
    string type;
    string privacy;
    Location *loc;
    Member *mem;
    Album *album;

public:
    ~Photo();
    void setid(int);
    void setname(string);
    void setremarks(string);
    void setType(string);
    void setprivacy(string);
    int getid();
    string getname();
    string getremarks();
    string getType();
    string getprivacy();
    void makeAlbum();
    void makeTag();
};
#endif