
char randchar()
{
    srand(time(NULL));
    char character = 'A' + rand() % 26;

    return character;
}
