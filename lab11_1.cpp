#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    string grade = grades[rand() % 9];
    cout << "You will get " << grade << " in this 261102.";

    return 0 ;
}

