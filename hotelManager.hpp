#include <list>
#include <iostream>
#include <string>
#include "guest.hpp"
using namespace std;

class HotelManager {

    private:
        list<Guest> allGuests{};

    public:
        void addGuest(){
            
            Guest *guest = new Guest();

            char tmp[101];
            printf("Name: ");
            scanf("%100s", tmp);
            guest->name = tmp;

            printf("Phone number: ");
            scanf("%100s", tmp);
            guest->phoneNumber = tmp;

            printf("Address: ");
            scanf("%100s", tmp);
            guest->address = tmp;

            printf("Days staying: ");
            scanf("%d", &guest->reservation.days);

            int numOfGuests = allGuests.size();

            guest->id = numOfGuests;
            guest->reservation.room = numOfGuests + 1;

            allGuests.push_back(*guest);

            cout << "New guest added!" << endl;
        }

        void listGuests(){

            for(Guest guest : allGuests){
                guest.toString();
            }
        }


};