//#include <io.h>
#include <string>
#include <iostream>

using namespace std;
void game();

//TODO: implement doubles and trips, make it in ui
// make gui
class Number {
public:
    string name;
    int value;
    int hit;
    int index;
    //bool complete;
public:
    Number() {
        name = nullptr;
        value = 0;
        hit = 0;
        index = 0;
        //complete = false;
    }
    Number(string givenName, int givenValue, int hitNumber, int givenIndex) {
        name = givenName;
        value = givenValue;
        hit = hitNumber;
        index = givenIndex;
        //complete = false;
    }
    // void incrementHit(int num) {
    //     if (hit >= 3) {
    //         complete = true;
    //     }
    //     hit++;
    // }
};
class Score {
public:
    //int closed[7] = {0};
    int player = 0;
    Number* five = new Number("Fifthteen", 15, 0, 0);
    Number* six = new Number("Sixteen", 16, 0, 1);
    Number* seven = new Number("Seventeen", 17, 0, 2);
    Number* eight = new Number("Eightteen", 18, 0, 3);
    Number* nine = new Number("Nineteen", 19, 0, 4);
    Number* twenty = new Number("Twenty", 20, 0, 5);
    Number* bull = new Number("Bullseye", 25, 0, 6);
    int totalPoints = 0;
public:
    Score(int givenPlayer) {
        player = givenPlayer;
    }
    //TODO: hit and increase number
    //TODO: check if number was closed
    //TODO: check if points need to be added
    // void hitNumber(Score* opponent, Number* num) {
    //     if (->hit >= 3) {
    //         if (closed[num->index] == this->player && opponent->) {
    //             this->totalPoints += num->value;
    //         }
    //         else {
    //             return;
    //         }
    //     }
    // }
    

};
class Game {
public:
    Score* p1 = new Score(1);
    Score* p2 = new Score(2);
    int closed[7] = {0};
    //int array[7] = {0};
public:
    bool checkClosed(Number* num);
};
void ioGame() {
    Game game;
    string input;
    bool done = false;

    while(!done) {
        cout << "Enter Numbers Hit\nEnter 0 if none were hit: ";
        cin >> input;
    }

    
}

main() {

}