#include <iostream>
#include <string>
using namespace std;
int main()
{
const int N = 12;
char vowel[N] = { 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };
string str;
cout << "Enter the string" << endl;//Введите строку
getline(cin, str);
int kolichestvo = 0;
for (int i = 0; str[i]; i++)
{
for (int j = 0; j < N; j++)
{
if (str[i] == vowel[j])
kolichestvo++;
}
}
if (kolichestvo)
cout << "Nomber of vowels: " << kolichestvo << endl;
else
cout << "No vowels" << endl;
return 0;
}
