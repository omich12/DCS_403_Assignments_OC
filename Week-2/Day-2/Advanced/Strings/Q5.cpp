// 5. String Compression
// Compress a string by counting consecutive repeated characters.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    string result = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (i + 1 < str.length() && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            result += str[i] + to_string(count);
            count = 1;
        }
    }

    cout << result << endl;
    return 0;
}
