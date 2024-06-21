#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(nullptr)); //To generate new random number everytime//
    int user_guess=0 , random_num;
    random_num = rand() % 100 + 1;//To generate the number only between 1 and 100//
    cout <<"Let's play a game of guessing random numbers." << endl << endl;
    cout <<"Select a random number." << endl;
    while(true)
    {
        cin >>user_guess;
        if(user_guess>random_num)
        {
            cout <<"Guess a lower number" << endl;
        }
        else if(user_guess<random_num)
        {
            cout <<"Guess a higher number" << endl;
        }
        else
        {
            cout <<"Congratulations! You guessed the correct number." << endl;
            break;
        }
    }
    return 0;
}
