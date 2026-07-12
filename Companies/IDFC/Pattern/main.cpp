#include <iostream>
using namespace std;

void printRow(int stars, int maxStars)
{
    // Leading spaces
    for(int i = 1; i <= maxStars - stars; i++)
        cout << " ";

    // Stars
    for(int i = 1; i <= stars; i++)
        cout << "* ";

    cout << endl;
}

int main()
{
    int maxStars = 8;

    // First Pyramid
    for(int i = 1; i <= 7; i++)
        printRow(i, maxStars);

    // Second Pyramid
    for(int i = 4; i <= 8; i++)
        printRow(i, maxStars);

    // Repeat last row
    printRow(8, maxStars);

    // Trunk
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= maxStars - 3; j++)
            cout << " ";

        cout << "* * *" << endl;
    }

    return 0;
}