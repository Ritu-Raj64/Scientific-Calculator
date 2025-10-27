#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

void line() {
    cout << "\n------------------------------------------------------------------------\n";
}
    void showMenu() {
    cout << "\n======================== Scientific Calculator ========================\n";

    cout << " 1.Addition        2.Subtraction      3.Multiplication   4.Division\n";
    cout << " 5.Square          6.Square Root      7.Cube             8.Cube Root\n";
    cout << " 9.Power           10.Modulus         11.Sine            12.Cosine\n";
    cout << "13.Tangent         14.Cosecant        15.Secant          16.Cotangent\n";

    cout << "\n17.Inverse Sine    18.Inverse Cos     19.Inverse Tan     20.Hyperbolic Sine\n";
    cout << "21.Hyperbolic Cos  22.Hyperbolic Tan  23.Natural Log     24.Base-10 Log\n";
    cout << "25.Log Base-n(x)   26.Hypotenuse      27.Exponential     28.Factorial\n";
    cout << "29.Permutation     30.Combination\n";

    cout << "==========================================================================\n";
    cout << "  \t 31.Show Menu Again\t";
    cout << "    0.Exit\n";
    cout << "==========================================================================\n";
}
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int choise;
    double a, b;
    int n, r;

    showMenu();

    do {
        cout << "\nEnter choice (0-30): ";
        cin >> choise;

        switch (choise) {
            case 1:
                {
                double sum = 0, num;
                cout << "Enter numbers (enter 0 to stop): ";
                while (true)
                {
                    cin >> num;
                    if (num == 0) break;
                    sum += num;
                }
                cout << "Addition = " << sum << endl;
                line();
                break;
            }
            case 2:
                cout<<"Enter First number = ";
                cin>>a;
                cout<<"Enter Second number = ";
                cin>>b;
                cout<<"Subtraction = "<<a-b<<endl;
                line();
                break;
            case 3:
                {
                    long double num,mult=1;
                    cout<<"Enter number (enter 1 to stop): ";
                    while(true)
                    {
                        cin>>num;
                        if (num == 1) break;
                        mult *= num;
                    }
                    cout<<"Multiplication = "<<mult<<endl;
                    line();
                    break;
                }
            case 4:
                cout<<"Enter First number = ";
                cin>>a;
                cout<<"Enter Second number = ";
                cin>>b;
                if(b==0)
                    cout<<"Error, Division by 0 not allowed"<<endl;
                else{
                    double div=a/b;
                    cout<< "Division = "<<div<<endl;
                }
                line();
                break;
            case 5:
                cout<<"Enter number for Square = ";
                cin>>a;
                cout<<"Square = "<<a*a<<endl;
                line();
                break;
            case 6:
                cout<<"Enter number for Square Root = ";
                cin>>a;
                cout<<"Square Root = "<<sqrt(a)<<endl;
                line();
                break;
            case 7:
                cout<<"Enter number for Cube = ";
                cin>>a;
                cout<<"Cube = "<<a*a*a<<endl;
                line();
                break;
            case 8:
                cout<<"Enter number for Cube Root = ";
                cin>>a;
                cout<<"Cube Root = "<<cbrt(a)<<endl;
                line();
                break;
            case 9:
                long double x,y;
                cout<<"Enter Base = ";
                cin>>x;
                cout<<"Enter power = ";
                cin>>y;
                cout<<"Power = "<<pow(x,y)<<endl;
                line();
                break;
            case 10:
                cout<<"Enter First number = ";
                cin>>a;
                cout<<"Enter Second number = ";
                cin>>b;
                cout<<"Modulus = "<<fmod(a,b)<<endl;
                line();
                break;
            case 11:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Sin("<<a<<") = "<<sin(a*PI/180)<<endl;
                line();
                break;
            case 12:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Cos("<<a<<") = "<<cos(a*PI/180)<<endl;
                line();
                break;
            case 13:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"tan("<<a<<") = "<<tan(a*PI/180)<<endl;
                line();
                break;
            case 14:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Cosine("<<a<<") = "<<1/sin(a*PI/180)<<endl;
                line();
                break;
            case 15:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"sec("<<a<<") = "<<1/cos(a*PI/180)<<endl;
                line();
                break;
            case 16:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"cot("<<a<<") = "<<1/tan(a*PI/180)<<endl;
                line();
                break;
            case 17:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Inverse Sin("<<a<<") = "<<asin(a)<<endl;
                line();
                break;
            case 18:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Inverse Cos("<<a<<") = "<<acos(a)<<endl;
                line();
                break;
            case 19:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Inverse Tan("<<a<<") = "<<atan(a)<<endl;
                line();
                break;
            case 20:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Hyperbolic Sin("<<a<<") = "<<sinh(a)<<endl;
                line();
                break;
            case 21:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Inverse Cos("<<a<<") = "<<cosh(a)<<endl;
                line();
                break;
            case 22:
                cout<<"Enter Angle (in degree) = ";
                cin>>a;
                cout<<"Inverse tan("<<a<<") = "<<tanh(a)<<endl;
                line();
                break;
            case 23:
                cout<<"Enter number for log(base e) = ";
                cin>>a;
                cout<<"log("<<a<<") = "<<log(a)<<endl;
                line();
                break;
            case 24:
                cout<<"Enter number for log(base 10) = ";
                cin>>a;
                cout<<"log10("<<a<<") = "<<log10(a)<<endl;
                line();
                break;
            case 25:
                cout<<"Enter log base = ";
                cin>>a;
                cout<<"Enter number for log"<<a<<" = ";
                cin>>b;
                cout<<"log"<<a<<"("<<b<<") = "<<log(b)/log(a)<<endl;
                line();
                break;
            case 26:
                cout<<"Enter number X = ";
                cin>>a;
                cout<<"Enter number Y = ";
                cin>>b;
                cout<<"Hypotenuse = "<<hypot(a,b)<<endl;
                line();
                break;
            case 27:
                cout<<"Enter power for Exponential = ";
                cin>>a;
                cout<<"Exponential(e^"<<a<<") = "<<exp(a)<<endl;
                line();
                break;
            case 28:
                {
                   int n;
                   cout<<"Enter number for Factorial = ";
                   cin >> n;
                   if (n < 0)
                        cout << "Factorial of negative not valid\n";
                   else
                        cout << "Factorial(" << n << ") = " << factorial(n) << endl;
                   line();
                   break;
                }
            case 29:
                {
                    int n, r;
                    cout << "Enter n = ";
                    cin >> n;
                    cout << "Enter r = ";
                    cin >> r;
                    if (n < r)
                        cout << "Error: n must be >= r\n";
                    else
                        cout <<"Permutation (" << n << "P" << r << ") = "
                             << factorial(n) / factorial(n - r) << endl;
                    line();
                    break;
                }
            case 30:
                {
                    cout << "Enter n = ";
                    cin >> n;
                    cout << "Enter r = ";
                    cin >> r;
                    if (n < r)
                        cout << "Error: n must be >= r\n";
                    else
                        cout<< "Combination (" << n << "P" << r << ") = "
                            <<factorial(n) /(factorial(r)*factorial(n - r))<<endl;
                    line();
                    break;
            }
            case 31:
            {
                showMenu();
                break;
            }
            case 0:
                cout << "Exiting...Goodbye\n";
                break;

            default:
                cout << "Option not implemented yet!\n";
                break;
        }

    } while (choise != 0);

    return 0;
}
