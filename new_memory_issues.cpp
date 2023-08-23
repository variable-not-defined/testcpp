#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char buffer[10];
    char* ptr = nullptr;
    ptr = new char[20];

    // Copy data into buffer unsafely (buffer overflow vulnerability)
    strcpy(buffer, "This is a long string that will overflow the buffer");

    // Release memory incorrectly (memory leak)
    delete ptr; // commented out intentionally

    // Dereference null pointer (null pointer dereference)
    *ptr = 'a'; // commented out intentionally

    return 0;
}
