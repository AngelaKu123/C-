#include "MyShape.h"

int main() {
    int type = 0;
    cout << "Input type for shape; 1 for rectangle, 2 for circle." << endl;
    // Input
    MyShape* theArray[5] = { nullptr };
    for (int i = 0; i < 5; i++) {
        cout << "-> Shape " << i + 1 << " type: ";
        cin >> type;
        switch (type) {
            case 1: {
                cout << "Enter length and width for rectangle: ";
                int leng = 0;
                int wid = 0;
                cin >> leng >> wid;
                theArray[i] = new Rectangle(leng, wid);
                break;
            }
            case 2: {
                cout << "Enter diameter for circle: ";
                int dia = 0;
                cin >> dia;
                theArray[i] = new Circle(dia);
                break;
            }
            default: {
                cout << "Input error; please enter type 1 or 2." << endl;
                break;
            }
        }
    }
    cout << "============================================" << endl;
    // Traverse
    for (int i = 0; i < 5; i++) {
        if (theArray[i] == NULL) {
            cout << "Shape " << i + 1 << " doesn't exist." << endl;
            continue;
        }
        cout << "Shape " << i + 1 << ": ";
        theArray[i]->showShape();
        cout << "The area of shape is " << theArray[i]->findArea() << endl;
    }
    cout << "======================================" << endl;
    // Free
    for (int i = 0; i < 5; i++) {
        cout << "Free shape " << i + 1 << ":" << endl;
        if (theArray[i] == NULL)
            cout << "Shape doesn't exist." << endl;
        delete theArray[i];
        theArray[i] = nullptr;
    }

    return 0;
}