#include <iostream>
using namespace std;
int stringArr(string);
int vowel(string);
int spe(string);
int main()
{
    string s;
    getline(cin, s);
    int len, wen;

    len = stringArr(s);
    cout << "Character : " << len << endl;

    wen = vowel(s);
    cout << "Vowel : " << wen << endl;
    spe(s);
    return 0;
}

int spe(string s)
{
    int spe = 0, chaar = 0, num = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            chaar++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num++;
        }
        else
        {
            spe++;
        }
    }

    cout << "special char : " << spe << endl;
    cout << "char : " << chaar << endl;
    cout << "number : " << num;
}
int vowel(string s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
};
int stringArr(string s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;

        if (s[i] == ' ')
        {
            count--;
        }
    }
    return count;
}