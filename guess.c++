#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

   
    int secret_no = rand() % 100 + 1;

    int guessing_no;
    int attempts = 0;
    int max_attm=10;
    int start=1;
    int end=100;

    cout << " Hello guys! Welcome to the Number Guessing Game!\n";
    cout << " Try to guess the number between "<<start<<" and "<<end<<"\n";

    do {
        cout << "Enter your guess: ";
        cin >> guessing_no;

        attempts++;

        if (guessing_no > secret_no) {
            cout << "Too high! Try again.\n";
        } else if (guessing_no < secret_no) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
        

    } while (attempts < max_attm);

    if (attempts>=max_attm)
    {
     cout <<"sorry! Better Luck Next Time...\n";
     cout<<"Total attempts is "<<attempts;
    }
    

    return 0;
}
