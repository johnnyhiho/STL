// STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CharacterOffset.cpp"
using namespace std;

char character(char start, int offset);

int main()
{
    cout << character('a', 1) << endl;
    cout << character('a', -1) << endl;
    cout << character('Z', -1) << endl;
    cout << character('?', 5) << endl;
    cout << character('A', 32) << endl;
    system("pause");
    return 0;
}

char character(char start, int offset) {
    int startAsciiValue = int(start);
    int target = startAsciiValue + offset;


    try {
        if (startAsciiValue < 65 || (startAsciiValue > 90 && startAsciiValue < 97) || startAsciiValue > 122)
        {
            throw invalidCharacterExcpeption();
        }
        else if (target < 65 || (target > 90 && target < 97) || target > 122)
        {
            throw invalidRangeException();
        }
    }
    catch (invalidCharacterExcpeption exception1)
    {
        cout << " Invalid Character Exception " << endl;
        return ' ';
    }
    catch (invalidRangeException exception2)
    {
        cout << " Invalid Range Exception " << endl;
        return ' ';
    }
    return char(target);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
