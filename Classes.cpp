#include <iostream>
using namespace std;

// 55. Concept and usage
    /*
    principle of OOP
    similar as structure
    Class ~ all the STL type are classes
    public ,protected, private(default) -> not be visible outside the class ; structure don't have these access modifiers
    cout << dt.day << endl ; // in this case , we cannot access day , cause it is private.
    */
// 56. Principles of OOP
    /*
    this
    method in class (set , get)
    -> assign attribute
    const
    hiding attributes -> set attributes to private and get and set them by public method.
    */
// 57. Principles of OOP
    /*
    OOP -> encapsulation , polymorphism , inheritance
    */

class Data {

public:
    int year;
    int month;

    void setDate(int d, int m, int y){
        //this > refer the current instances of the class.
        // -> is a pointer , we can use it in class , structure.
        // this -> attribute
        this -> day = d;
        this -> month = m;
        this -> year = y;
    }

    // const mean , this method will not change the state of the class .
    void Print() const {
        cout << this -> month << "/" << this-> day << "/" << this -> year << endl;
    }

    // three getters .... just get the value and return , they do not change anything...
    // Getters
    int GetDay() const {
        return this-> day;
    }
    int GetMonth() const {return this-> month;}
    int GetYear() const {return this-> year;}

    // Setters
    void SetDay(int d) {this->day = d;}
    void SetMonth(int m) {this->month = m;}
    void Setyear(int y) {this->year = y;}

private:
    int day;
    // function in class are also called "method"
    // method , (getter , setter) -> public method ?
};



int main()
{
    Data dt , dt1; // we can declare multiple object in one line.
    dt.month = 8;
    dt.year = 1993;
    dt.setDate(20,12,2016); // instead of setting up in multiple line for each attributes, you can use one line by using method to initialize it ,
    cout << dt.month << endl ;
    dt.Print();


    dt1.setDate(10,10,2000);
    dt1.Print();


    int m, d, y;
    cout << "Enter data (m/d/y): ";
    cin >> m >> d >> y;
    Data dt2;
    dt2.setDate(d, m, y);
    cout << "Entered data: ";
    dt2.Print();
    cout << "Month: " << dt.GetMonth();

    //cout << "Hello world!" << endl;
    return 0;
}
