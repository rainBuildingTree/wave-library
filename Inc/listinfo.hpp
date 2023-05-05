#ifndef LISTINFO_HPP
#define LISTINFO_HPP

class ListInfo {
private:
    unsigned char infoID[4];
    unsigned int infoSize;
    unsigned char* text;
};

#endif