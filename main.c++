#include <iostream>
#include <string>
#include "clsMyString.h"
using namespace std;

int main()
{
    clsMyString <string> s1;

    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    cout << "\nS1 = " << s1.Value() << endl;

    s1.Set("Sayed");
    cout << "S1 = " << s1.Value() << endl;

    s1.Set("Sayed2");
    cout << "s1 = " << s1.Value() << endl;
    
    s1.Set("Sayed3");
    cout << "s1 = " << s1.Value() << endl;

    cout << "\n\nUndo:";
    cout << "\n___________\n";
    
    s1.Undo();
    cout << "\nS1 after Undo = " << s1.Value() << endl; 
    
    s1.Undo();
    cout << "\nS1 after Undo = " << s1.Value() << endl; 
    
    s1.Undo();
    cout << "\nS1 after Undo = " << s1.Value() << endl; 
    
    
    cout << "\n\nRedo:";
    cout << "\n___________\n";

    s1.Redo();
    cout << "\nS1 after Redo: " << s1.Value() << endl;

    s1.Redo();
    cout << "\nS1 after Redo: " << s1.Value() << endl;

    s1.Redo();
    cout << "\nS1 after Redo: " << s1.Value() << endl;

    return 0;
}