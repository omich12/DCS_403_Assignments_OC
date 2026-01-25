
// In ASCII, lowercase letters are 32 values higher than uppercase letters.
char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        // 'a' - 'A' equals 32
        return ch + ('a' - 'A');
    }
    else
    {
        // If it's not an uppercase letter, return the character as is.
        return ch;
    }
}

