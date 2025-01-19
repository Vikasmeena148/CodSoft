#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

int n,random_number;  

srand(time(0));

n=50;
random_number=rand()%n;

int user_guess=0;
int no_of_moves=0;


while(user_guess!=random_number){
    no_of_moves++;
cout<<"\n";
    cout << "Enter Your Guess: ";
    cin >> user_guess;

    if(user_guess == random_number){
        cout << "Congratulations! Your guess is right " << no_of_moves << " moves to get it right." <<endl;
    }

    else if(user_guess<random_number){
        cout<< "Wrong Guess! You entered a Lower number. Enter a Higher number" << endl;
    }

    else{
        cout<< "Wrong Guess! You entered a Higher number. Enter a Lower number" << endl;
    }
}

}