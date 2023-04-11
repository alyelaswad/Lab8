#include <iostream>
using namespace std;
class Album
{
private:
    int id;
    string title;
    string remarks;

public:
    void setid(int);
    void settitle(string);
    string gettitle();
    void setremarks(string);
    int getid();
    string getremarks();
    Album createAlbum();
};
