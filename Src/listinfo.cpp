#include "listinfo.hpp"
#include <cstring>
ListInfo::ListInfo() : infoSize(0), text(nullptr) {
    infoID = new char[4];
}