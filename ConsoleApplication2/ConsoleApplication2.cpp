#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
using namespace std;

int main()
{
    int k = 0;
    for (int i = 0; i < 100000; i++) {
        k += 10;
        Beep(k, 100); Sleep(5);ygyu
    }


    system("pause");
    return 0;
}   //Press any key to exit