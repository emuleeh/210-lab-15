//COMSC 210 | Lab 15 | Em
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

const int W15 = 15;

class Movie {
private:
    string title;
    int year;
    string writer;
public:
    //getters and setters
    string getTitle()           { return title; }
    void setTitle(string t)     { title = t; }
    int getYear()               { return year; }
    void setYear(int y)         { year = y; }
    string getWriter()          { return writer; }
    void setWriter(string w)    { writer = w; }
    
    //print method
    void print() {
        cout << setw(W15) << "Movie: " << title << endl;
        cout << setw(W15) << "Year released: " << year << endl;
        cout << setw(W15) << "Screenwriter: " << writer << endl;
    }
};

int main() {
    
}
