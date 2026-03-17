#include <iostream>
#include <cstdlib> // для system
#include <string>
#include "function.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string des_u;
    string des_sum;
    des_u = "cst_g ---";
    for (int i = 0; i < 80; i++) {

        des_u = des_u + '*';
        //system("cls");
        cout << des_u << endl;
    }
    for (int i = 0; i < 80; i++) {

        des_u = des_u.erase();
        //system("cls");
        cout << des_u << endl;
    }
    //system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}