#include<iostream>
#include<string>

using namespace std;

class Date{
    public:
        //sccessor method
        int getDay() const;
        int getMonth() const;
        int getYear() const;

        //mutator method
        void setDay( int newDay);
        void setMonth( int newMonth);
        void setYear( int newYear);
        void print() const;

    private:
    int day,month,year; //instance variables
    bool isLeapyear(int yearNum); 
    int daysInMonth(int )
};

int main(){

    return 0;
}