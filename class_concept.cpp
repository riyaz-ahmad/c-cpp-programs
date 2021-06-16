/*
    *This program illustrates the concept of classes in c++
*/
//include all header files by just includeing the following header file
#include<bits/stdc++.h>

using namespace std;

//class definition 
class Square{
    //by-default the members are private
    long long int side;

    //public members
    public:
    //constructor
    Square (){
        side = 0;
    }

    //member function for the getting side of square from the user
    void getSide(long long int side){
        this->side = side;
    } 

    //member function for perimeter of square
    long long int putPerimeter(){
        return 4*side;
    }

    //member function for area of square
    long long int putArea(){
        return side*side;
    }
};//class ends here

//main function

int main(){
    long long int s, area, peri;
    //creating an object of Square;
    Square sq ;
    cout<<"Enter the side of square: ";
    cin>>s;
    //calling member function of Square class
    sq.getSide(s);
    cout<<"Perimeter of Square: "<<sq.putPerimeter()<<endl;
    cout<<"Area of Square: "<<sq.putArea()<<endl;
    return 0;
}