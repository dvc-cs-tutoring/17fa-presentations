#include <iostream>
#include <string>
using namespace std;

void ifSingleEquality() {

    int myValue = 33;

    if (myValue = 9)
    {
        cout << "myValue = 9" << endl;
    }
    else
    {
        cout << "myValue != 9" << endl;
    }
}
void ternaryOperator() {

    bool condition = false;
    string output = "";
    output = (condition) ? "Yes" : "No";
    cout << output << endl;
}
void switchMultipleCases() {

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
            case 0:
            case 1:
            case 2:
            {
                cout << i << " is less than 3" << endl;
                break;
            }
            default:
            {
                cout << "Default" << endl;
                break;
            }
        }
    }
}
void switchNoBreak() {

    int myValue = 0;

    switch (myValue)
    {
        case 0:
        {
            cout << "myValue = " << myValue << endl;
        }
        default:
        {
            cout << "Default" << endl;
            break;
        }
    }
}

void forOffByOne() {

    const int SIZE = 5;
    int arrayOfInts[SIZE] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i <= SIZE; i++)
    {
        cout << "arrayOfInts[" << i << "] = "
            << arrayOfInts[i] << endl;
    }
}
void breakExitsOnlyOneLoop() {

    for (int i = 0; i < 5; i++)
    {
        cout << "Outer loop at " << i << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "    Inner loop at " << j << endl;

            if (j == 3)
            {
                break;
            }
        }

        cout << endl;
    }
}
void whileTrue() {

    int counter = 5;
    while (true)
    {
        counter--;
        cout << "counter = " << counter << endl;

        if (counter == 0)
        {
            break;
        }
    }
}
void recursionInfinite(int counter) {

    if (counter == 0)
    {
        return;
    }
    else
    {
        cout << counter << " iterations left" << endl;
        recursionInfinite(counter - 1); //
    }
}

int main() { // NEW NEW NEW

    //ifSingleEquality();
    //ternaryOperator();
    //switchMultipleCases();
    //switchNoBreak();

    //forOffByOne();
    //breakExitsOnlyOneLoop();
    //whileTrue();
    //recursionInfinite(5);

    return 0;
}
