#include <iostream>
#include <time.h>

using namespace std;
/* LOTTERY - psuedo random number generator */

void lottery(int, int);
int main()
{
    /* cout << time(NULL) << endl; */

    /* int nr = rand();

    cout << nr << endl;

    nr = rand();

    cout << nr << endl; */



    lottery(49, 6);

    return 0;
}
void lottery(int total_balls, int balls_to_draw)
{

    if (total_balls < balls_to_draw)
        return;

    srand(time(NULL)); // seeds

    int *balls = new int[balls_to_draw];

    for (int i = 0; i < balls_to_draw; i++)
    {
        balls[i] = rand() % total_balls + 1;

        for (int j = 0; j < i + 1; j++)
        {
            if(balls[i] == balls[j] && i != j)
            {
                i--;
                break;
            }
            else if (j ==i)
            cout << balls[i] << endl;

        }

    }


    delete[] balls;

}
