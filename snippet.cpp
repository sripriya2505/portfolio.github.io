#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

class LodgingSystem {
private:
    // Set to manage rooms (Room ID and Room Type)
    set<pair<int, string>> rooms;

    // Map to store room type and its price
    map<string, double> roomPrices;

public:
    // Constructor to initialize the room types and prices
    LodgingSystem() {
        // Room types and their respective prices
        roomPrices["Single"] = 100.0;
        roomPrices["Double"] = 150.0;
        roomPrices["Suite"] = 250.0;

        // Adding rooms to the set (Room ID, Room Type)
        rooms.insert({101, "Single"});
        rooms.insert({102, "Double"});
        rooms.insert({103, "Suite"});
        rooms.insert({104, "Single"});
        rooms.insert({105, "Double"});
    }

    // Function to display available rooms
    void displayAvailableRooms() {
        cout << "Available Rooms: \n";
        for (const auto& room : rooms) {
            cout << "Room ID: " << room.first << ", Room Type: " << room.second << ", Price: " << roomPrices[room.second] << "\n";
        }
    }

    // Function to book a room
    bool bookRoom(const string& roomType) {
        for (auto it = rooms.begin(); it != rooms.end(); ++it) {
            if (it->second == roomType) {
                // Room found, book it
                cout << "Room " << it->first << " of type " << roomType << " has been booked.\n";
                rooms.erase(it); // Remove the booked room from the set
                return true;
            }
        }
        cout << "Sorry, no available rooms of type " << roomType << " are available.\n";
        return false;
    }

    // Function to release a room (free up the room)
    void releaseRoom(int roomId, const string& roomType) {
        rooms.insert({roomId, roomType});
        cout << "Room " << roomId << " of type " << roomType << " is now available.\n";
    }
};

int main() {
    LodgingSystem system;

    // Display available rooms
    system.displayAvailableRooms();

    // Book a room
    system.bookRoom("Single");
    system.bookRoom("Suite");

    // Display available rooms after booking
    system.displayAvailableRooms();

    // Release a room
    system.releaseRoom(101, "Single");

    // Display available rooms after releasing a room
    system.displayAvailableRooms();

    return 0;
}
