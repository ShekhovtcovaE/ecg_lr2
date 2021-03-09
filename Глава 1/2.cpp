int readNumber();
void writeAnswer(int c);

int main()
{
    int a, b;
    a = readNumber();
    b = readNumber();
    writeAnswer(a + b);
    return 0;
}
