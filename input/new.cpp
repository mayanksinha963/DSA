// C++ program to convert
// int to char using sprintf()
#include <iostream>
using namespace std;
#define Max_Digits 10

// Driver code
int main()
{
    int N = 1234;
    char n_char[Max_Digits +
                sizeof(char)];
    std::sprintf(n_char,
                 "%d", N);
    std::printf("n_char: %s \n",
                n_char);
    return 0;
}
