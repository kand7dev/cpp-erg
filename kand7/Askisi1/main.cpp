#include <iostream>
#include "askisi1.h"

using namespace std;

int main(){
    double size = 0;
    double minimum = 0;
    cout << "Enter the size of your desired Array : ";
    cin >> size;
    printf("\n");
    double *myArray = creatArray(size);
    minimum = smallest(myArray,size);
    cout << "Smallest number is : " << minimum << endl;
    cout << "Smallest number * 2 : " << minimum*2 << endl;
    free(myArray);
    return 0;
}