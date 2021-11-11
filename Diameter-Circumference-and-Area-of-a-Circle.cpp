/*(Diameter, Circumference and Area of a Circle) Write a
program that reads in the radius of a circle as an integer and
prints the circle’s diameter, circumference and area. Use the
constant value 3.14159 for π. Do all calculations in output
statements. (c++ how to program) */
//program calculate Diameter, Circumference and Area of a Circle
#include <iostream>
using namespace std ;
int main(){
    int radius (0) , diameter(0) , circumference(0) , area(0)  ;
    cout << " Enter the raduis " ;
    cin >> radius ;
    //circumference = diameter *3.14
    //diameter = radius * 2
    circumference = radius * 2 * 3.14 ; 
    cout << " The circumference is : " << circumference << endl ;
    //area = radius power by 2 * 3.14
    area = radius * radius * 3.14 ;
    cout << " The area is : " << area << endl ; 

}