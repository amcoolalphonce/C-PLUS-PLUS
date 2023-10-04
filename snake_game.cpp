#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

void Setup()
{
        gameOver = false;
        dir = STOP;
        x = width / 2;
        y = height / 2;
        fruitX = rand() % width;
        fruitY = rand() % height;
        score = 0;
}

void Draw()
{
        system("cls");
        for (int i = 0; i < width + 2; i++)
                cout << "#";
                cout << endl;

        for (int i = 0; i < height; i++)
        {
                for (int j = 0; j < width; j++)
                {
                        {
                                if (j == 0)
                                        cout << "#";
                                if (i == y && j == x)
                                        cout << "O";
                                else if (i == fruitY && j == fruitX)
                                        cout << "F";
                                else
                                {
                                        bool printTail = false;
                                        for (int k = 0; k < nTail; k++)
                                        {
                                                if (tailX[k] == j && tailY[k] == i)
                                                {
                                                        cout << "o"; 
                                                        printTail = true;
                                                }
                                        }
                                        if (!printTail)
                                                cout << " ";
                                }
                                if (j == width - 1)
                                        cout << "#"; 
                        }
                        cout<<endl;
                 }
                for (int i = 0; i < width + 2; i++)
                        cout << "#";

                 cout << endl;  
                  cout << "Score:" << score << endl;
        }
}

void Input()
{
        if (_kbhit())
        {
                switch (_getch())
                {
                case 's':
                        dir = LEFT;
                        break;
                case 'd':
                        dir = RIGHT;
                        break;
                case 'e':
                        dir = UP;
                        break;
                case 'x':
                        dir = DOWN;
                        break;
                }
        }
}