// Arkis

/*
 * Questo programma serve per automatizzare il comando linux find.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

string Pos, FileName;

// Stampa titolo
void Title() {
    system("clear && figlet -f slant Finder && sleep 1");
}

// Input da tastiera per sapere posizione e nome file da cercare
void InputDati() {
    cout<<endl<<"Position: ";
    cin>>Pos;

    cout<<endl<<"Filename: ";
    cin>>FileName;

    cout<<endl;
}

// Esecuzione e automazione del comando find
void Execute() {
    const string FIND = "sudo find " + Pos + " -name " + FileName;
    system(FIND.c_str());
}

// Start
int main() {
    Title();
    InputDati();
    Execute();

    return 0;
}
