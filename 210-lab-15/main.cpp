//COMSC 210 | Lab 15 | Em
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

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
}
