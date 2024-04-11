#include <iostream>
#include <ctime>
using namespace std;

int height = 20;
int width = 20;
bool gameover = false;
int random;
int x = 10;
int y = 10;
char direction = 'm';
int fruitx = 5;
int fruity = 5;
int score = 0;

void draw()
{
    while (!gameover) {

   

        switch (direction)
        {
        case 'u':
            x--;
            break;

        case 'l':
            y--;
            break;
        case 'd':
            x++;
            break;
        case 'r':
            y++;
            break;
        }

        if (x == fruitx && y == fruity) {
            score++;
            srand(time(NULL));
            fruitx = rand() % width;
            fruity = rand() % width;
        }
       

        for (int i = 0; i < width * 2; i++)
        {
            cout << "#";
        }
        cout << endl;

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                if (i == x && j == y)
                {
                    cout << "f";
                }
                else if (i == fruitx && j == fruity)
                {

                    cout << "o";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < width * 2; i++)
        {
            cout << "#";
        }
        cout << endl;
        cin >> direction;
        cout << endl;

        cout << "your game score is : " << score << endl;

    }
 
}

void rules() {
    cout << "rules for play this game : " << endl;
    cout << "1: use up|down|right|left keys to move your point" << endl;
    cout << "2: after press any of these keys always press enter to further progress" << endl;
    cout << "3:rember this is infinite point tracker game never end" << endl;
    }

int main()
{
    cout << "!!!!!!!!!!!!!!!!WELCOME TO A POINT TRACKER GAME !!!!!!!!!!!!!!!!!!!!!" << endl;

    cout << endl;
     
    int opt;

    cout << "1: show all rule" << endl;
    cout << "2:play game " << endl;

    cout << "enetr option: " << endl;
    cin >> opt;
    cout << endl;

    if (opt == 1) {
        rules();
       }
    else {
        draw();
    }
    main();
    return 0;
}