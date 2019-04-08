#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char character[100] = "Hello My Dearling Cpp";

    char *charPtr = character + 6;

    for (size_t i = 0; i < strlen(charPtr); i++)
    {
        cout << charPtr[i]; //Start from My Dearling Cpp
    }

    auto p = memchr(character, 'C', strlen(character));
}