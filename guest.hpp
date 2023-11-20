#include <string>
#include <iostream>
#include "reservation.hpp"
using namespace std;

struct Guest {

    int id;
    string name;
    string address;
    string phoneNumber;
    reservation reservation;

    public:
        void toString(){

            cout << "ID: " << id 
            << ", Name: " << name 
            << ", Address: " << address 
            << ", Phone Number: " << phoneNumber 
            << ", Reservation: Staying in room " << reservation.room << " for " << reservation.days << " days.\n";

        }

};