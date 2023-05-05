#ifndef LISTINFO_HPP
#define LISTINFO_HPP

class ListInfo {
private:
    char* infoID;
    unsigned int infoSize;
    char* text;
public:
    ListInfo();
    ~ListInfo();

};

#endif