#include <stddef.h>

void rot_x(char *s, int x)
{
    if (s == NULL)
        return;
    if (x < 0)
        x = 26 + (x % 26);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (('A' <= s[i]) && (s[i] <= 'Z'))
        {
            s[i] = s[i] + x - 'A';
            s[i] = s[i] % 26;
            s[i] = s[i] + 'A';
        }
        else if (('a' <= s[i]) && (s[i] <= 'z'))
        {
            s[i] = s[i] + x - 'a';
            s[i] = s[i] % 26;
            s[i] = s[i] + 'a';
        }
        continue;
    }
}
