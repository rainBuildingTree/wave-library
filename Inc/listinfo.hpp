#ifndef LISTINFO_HPP
#define LISTINFO_HPP

class ListInfo {
private:
    char infoID[4];
    unsigned int infoSize;
    char* text;
public:
    ListInfo();

};

#endif