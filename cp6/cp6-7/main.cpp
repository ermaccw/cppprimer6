//6-7
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string word;
    int vowel = 0, consonant = 0, other = 0;
    cout << "输入单词（\"q\"退出）：\n";
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                ++vowel;
                break;
            default:
                ++consonant;
            }
        }
        else
            ++other;
    }

    cout << vowel << " 个单词是元音开头\n"
         << consonant << " 个单词是辅音开头\n"
         << other << " 个其他\n";

    system("pause");
    return 0;
}