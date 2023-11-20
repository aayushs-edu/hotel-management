#include <vector>
#include <string>
using namespace std;

class Room {
    
    public:
        int numOfBeds;
        vector<string> activities;

};

class Suite : public Room {

    public:
        Suite() {
            this->numOfBeds = 2;
            this->activities = vector<string>{"Sit in balcony", "Watch TV"};
        }

};