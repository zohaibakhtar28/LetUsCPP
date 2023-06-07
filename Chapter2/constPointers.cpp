#include <iostream>
using namespace std;
void xstrcpy(char *a,  const char *b)
{
    while(*b != '\0')
    {
        *a = *b;
        b++;
        a++;


    }
    *a = '\0';
            //b = b-6; const is used to not modify source str.
            // *b = 'K';
}
int main()
{
    char s[] = "Nagpur";
    char t[10];

    xstrcpy(t, s);

    for (int i = 0; i < 6; i++)
    {
        cout<<t[i]<<endl;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}