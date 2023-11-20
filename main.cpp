#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "hotelManager.hpp"
using namespace std;

int main(){

    HotelManager *hm = new HotelManager();

    cout << "Welcome to your hotel!" << endl;
    
    while(true){
        cout << "Welcome to your hotel";

        char c;
        scanf("%c", &c);

        if(c == 'N'){
            hm->addGuest();
        }
        else if(c == 'L'){
            hm->listGuests();
        }
        else if(c == 'E'){
            break;
        }
    }

    cout << "Exited" << endl;

    return 0;
}