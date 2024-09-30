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
        cout << endl;
    }
};

int main() {
    //declarations
    cout << fixed << setprecision(2);
    vector<Movie> movies_v;
    ifstream fin ("movies.txt");
    string l;   //holds temporary title
    int r;      //holds temporary year
    string s;   //holds temporary writer
    
    if (fin.good()) {
        while (getline(fin, l)) {
            fin >> r;
            fin.ignore();
            getline(fin, s);
            Movie tmp;
            tmp.setTitle(l);
            tmp.setYear(r);
            tmp.setWriter(s);
            movies_v.push_back(tmp);
        }
        fin.close();
    }
    else
        cout << "Input file not found.\n";
    
    //Output vector
    for (auto val : movies_v) {
        val.print();
    }
}


