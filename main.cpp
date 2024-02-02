#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    vector<bool> test;

    test.push_back(true);
    test.push_back(false);

    

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}