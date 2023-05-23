#include <stdio.h>

void clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

void writeStringToBuffer(const char* string, char* screenBuf, int width, int height, int x, int y)
{
    int i = 0;
    while (string[i] != '\0')
    {
        screenBuf[(x + i) + (y * (width + 1))] = string[i];
        i++;
    }
}

void setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("note game", screenBuf, width, height, 11, 4);
    writeStringToBuffer("1.play", screenBuf, width, height, 12, 7);
    writeStringToBuffer("2.menu", screenBuf, width, height, 12, 8);
    writeStringToBuffer("3.exit", screenBuf, width, height, 12, 9);

    printf("%s\ninput> ", screenBuf);
}

void setGamemenuToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("menu", screenBuf, width, height, 13, 4);
    writeStringToBuffer("1.home", screenBuf, width, height, 7, 8);
    writeStringToBuffer("2.exit", screenBuf, width, height, 7, 9);
    printf("%s\ninput> ", screenBuf);
}

void setGameexitScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("EXIT", screenBuf, width, height, 13, 4);
    writeStringToBuffer("1.yes", screenBuf, width, height, 12, 8);
    writeStringToBuffer("2.no", screenBuf, width, height, 12, 9);
    printf("%s\ninput> ", screenBuf);
}

int main()
{
    int width = 31;
    int height = 15;
    int screenint = 1;
    char screenBuf[width * height + 1];

    while (screenint)
    {
        if (screenint == 1)
        {
            setTitleToScreenBuffer(screenBuf, width, height);
            scanf("%d", &screenint);
        }
        else if (screenint == 2)
        {
            setGamemenuToScreenBuffer(screenBuf, width, height);
            scanf("%d", &screenint);
            if (screenint == 1)
            {
                
            }
            else if(screenint ==2)
            {
             setGameexitScreenBuffer(screenBuf, width, height);
             scanf("%d", &screenint);
             break;             
            }
            else
            {

            }
        }
        else if (screenint == 3)
        {
            setGameexitScreenBuffer(screenBuf, width, height);
            scanf("%d", &screenint);
            if (screenint == 1)
            {
                screenint = 0;
            }
        }
    }

    return 0;
}
