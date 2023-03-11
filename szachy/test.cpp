#include <iostream>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t king="\u2654";
    std::wcout << king;
}