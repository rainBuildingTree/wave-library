#include "listinfo.hpp"
#include <cstring>
ListInfo::ListInfo() : infoSize(nullptr), text(nullptr) {
    infoID = new char[4];
}