#include<iostream>
using namespace std;

int overload_function (int a ,int b)
{
    return(a+b);
}

double overload_function (double a, double b)
{
    return(a+b);

}

int overload_function (int a, int b, int c)
{
    return(a+b+c);
}

double overload_function (int a, double b)
{
    return(a+b);
}

double overload_function (double a, int b)
{
    return(a+b);
}



int main()
{
    cout << "added is: "<< overload_function (10,20) << endl;
    cout << "added is: "<< overload_function (4.4,6.78) << endl;
    cout << "added is: "<< overload_function (10,20,6) << endl;
    cout << "added is: "<< overload_function (4,6.78) << endl;
    cout << "added is: "<< overload_function (6.78,4) << endl;
    

    return 0;
}