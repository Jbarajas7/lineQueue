#include <queue>
#include <iostream>
#include <string>

/*
* Jonathan Barajas
* D Harden
* Project 2.3
* 
* 
* This program will create a queue to simulate being in line and letting the
* user know its place in line as customers purchase tickets
*/

using namespace std;

int main() {
    string personName = "";
    int counter = 0;
    int youPosition;

    queue<string> peopleInQueue;

    getline(cin, personName);

    while (personName != "-1") {
        counter++;
        peopleInQueue.push(personName);
        if (personName == "You") {
            youPosition = counter;
        }
        getline(cin, personName);
    }

    cout << "Welcome to the ticketing services..." << endl;
    cout << "You are number " << youPosition << " in the queue." << endl;
    while (youPosition > 1) {
        cout << peopleInQueue.front() << " has purchased a ticket." << endl;
        peopleInQueue.pop();
        youPosition--;
        cout << "You are now number " << youPosition;
        cout << endl;

    }
    cout << "You can now purchase you ticket!" << endl;

}

/* INPUT:
Zadie Smith
Tom Sawyer
You
Louisa Alcott
-1

OUTPUT:
Welcome to the ticketing services...
You are number 3 in the queue.
Zadie Smith has purchased a ticket.
You are now number 2
Tom Sawyer has purchased a ticket.
You are now number 1
You can now purchase you ticket! 
*/