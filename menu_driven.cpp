// Programmer: Emmanuel Maneswa
// Email: maneswaemmanuel02@gmail.com

#include<iostream>
#include<iomanip>

#define PI 3.14159

using namespace std;

int is_prime(int p){
    int flag = 1;
    
    if(p <= 1)
        return 0;
    
    for(int i = 2; i <= p / 2; i++)
        if(i % p == 0){
            flag = 0;
            break;
        }
    return flag;
}

inline double area_of_circle(double r){
    return PI * r * r;
}

inline double circumference_of_circle(double r){
    return 2 * PI * r;
}

inline double area_of_triangle(double h, double b){
    return (h * b) / 2;
}

inline double area_of_cube(double e){
    return 6 * e * e;
}

inline double area_of_parallelogram(double h, double b){
    return h * b;
}

void calculate_area_and_circumference(){
    char ch;
    double radius, height, base, edge;
    
    cout << "\033[2J\033[1;1H"; // to clear screen
    
    while(1){
    
        cout << setprecision(4) << fixed;
        cout << "Area and Circumference of:" <<endl;
        cout << "\ta. Circle." << endl;
        cout << "\tb. Triangle." << endl;
        cout << "\tc. Cube." << endl;
        cout << "\td. Parallelogram." << endl;
        cout << "\te. Back to main menu." << endl << endl;

        do{
            cout << "Choice: ";
            cin >> ch;

            switch(ch){
                case 'a':
                    cout << "\nEnter Radius of Circle: ";
                    cin >> radius;
                    cout << "Area = " << area_of_circle(radius) << endl;
                    cout << "Circumference = " << circumference_of_circle(radius) << endl;
                    break;
                case 'b':
                    cout << "\nEnter Height of Triangle: ";
                    cin >> height;
                    cout << "Enter base of Triangle: ";
                    cin >> base;
                    cout << "Area = " << area_of_triangle(height, base) << endl;
                    break;
                case 'c':
                    cout << "\nEnter Edge Length of Cube: ";
                    cin >> edge;
                    cout << "Surface Area = " << area_of_cube(edge) << endl;
                    break;
                case 'd':
                    cout << "\nEnter Height of Parallelogram: ";
                    cin >> height;
                    cout << "Enter Base of Parallelogram: ";
                    cin >> base;
                    cout << "Area = " << area_of_parallelogram(height, base) << endl;
                    break;
                case 'e':
                    cout << "Going back to main menu..." << endl;
                    return;
                default:
                    cout << "Invalid choice try again." << endl << endl;
                    cout << "Another ";
            }
        }while(ch < 'a' || ch > 'e');
        
        cout << endl << "\nDo you want to clear screen [y/n]: ";
        char c;
        cin >> c;
        if(c == 'y' || c == 'Y')
            cout << "\033[2J\033[1;1H";
    }
}

inline double volume_of_cylinder(double r, double h){
    return PI * r * r * h;
}

inline double volume_of_sphere(double r){
    return (4 / 3) * (PI * r * r * r);
}

inline double volume_of_cube(double e){
    return e * e * e;
}

void calculate_volume(){
    char ch;
    double radius, height, edge;
    
    cout << "\033[2J\033[1;1H";
    
    while(1){
    
        cout << setprecision(4) << fixed;
        cout << "Volume of:" << endl;
        cout << "\ta. Cylinder." << endl;
        cout << "\tb. Sphere." << endl;
        cout << "\tc. Cube" << endl;
        cout << "\td. Back to main menu" << endl << endl;

        do{
            cout << "Choice: ";
            cin >> ch;

            switch(ch){
                case 'a':
                    cout << "\nEnter Radius of Cylinder: ";
                    cin >> radius;
                    cout << "Enter Height of Cylinder: ";
                    cin >> height;
                    cout << "Volume = " << volume_of_cylinder(radius, height);
                    break;
                case 'b':
                    cout << "\nEnter Radius of Sphere: ";
                    cin >> radius;
                    cout << "Volume = " << volume_of_sphere(radius) << endl;
                    break;
                case 'c':
                    cout << "\nEnter Edge Length of Cube: ";
                    cin >> edge;
                    cout << "Volume = " << volume_of_cube(edge) << endl;
                    break;
                case 'd':
                    cout << "Going back to main menu..." << endl;
                    return;
                default:
                    cout << "Invalid choice try again." << endl << endl;
                    cout << "Another ";
            }
        }while(ch < 'a' || ch > 'd');

        cout << endl << "\nDo you want to clear screen [y/n]: ";
        char c;
        cin >> c;
        if(c == 'y' || c == 'Y')
            cout << "\033[2J\033[1;1H";
    }
}

int main(void) {
    
    cout << "\033[2J\033[1;1H";
    
    int ch;
    
    while(1){
        cout << "\t1. Prime Number." << endl;
        cout << "\t2. Calculate Area and Circumference." << endl;
        cout << "\t3. Calculate Volume." << endl;
        cout << "\t4. Exit." << endl << endl;
        
        cout << "Choice: ";
        cin >> ch;
        if(ch == 4){
            cout << "Exiting..." << endl;
            return 0;
        }
        
        switch(ch){
            case 1:
                int p;
                cout << "Enter number to test: ";
                cin >> p;
                cout << p << ((is_prime(p)) ? " is a prime number." : " is not a prime number.") << endl;
                break;
            case 2:
                calculate_area_and_circumference();
                break;
            case 3:
                calculate_volume();
                break;
            default:
                cout << "Invalid choice try again." << endl;
        }
        
        cout << endl << "\nDo you want to clear screen [y/n]: ";
        char c;
        cin >> c;
        if(c == 'y' || c == 'Y')
            cout << "\033[2J\033[1;1H"; //to clear screen
        
    }
    // The reason there is no (return 0) is the program has one exit point 
    // which is inside the if statement in the while loop
}
