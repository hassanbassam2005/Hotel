#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include "HashTable.hpp"

std::vector<std::string> RoomsType;
std::unordered_map<std::string, int> RoomsNumberMap;
HashTable Table(100);
HashTable TablePrice(100000);
int numberOfRooms = 0;
int price = 0;

    void TypeOfRooms()
    {
        int numberOfTypes = 0;
        std::cout << "How many types you have in the hotel: \n";    
        std::cin >> numberOfTypes;
        std::cin.ignore();
        std::cout << "Enter the types of the rooms:\n";
        std::string type;
        for (int i = 0; i < numberOfTypes; ++i)
        {
            std::getline(std::cin, type);
            RoomsType.push_back(type);
        }
    }

    void RoomsNumber()
    {
        std::cout << "Enter the number of each type:\n";
        for (const auto& type : RoomsType)
        {
           int count;
           std::cout << "Number of " << type << " rooms: ";
           std::cin >> count;
           RoomsNumberMap[type] = count;
           Table.insert(type, count);
           TablePrice.insert(type, count);
        }
    }

    void RoomSearch()
    {
        std::string userType;
        std::cout << "enter the type to be searched and to be booked";
        std::getline(std::cin, userType);
        if((bool)Table.search(userType))
        {
            std::cout << "the number of Rooms is " << Table.search(userType) << std::endl;
        }
        else
        {
            std::cout << "there is no room\n";
        }
    }

    void RoomBook()
    {
        std::string Type;
        std::cout << "enter type to book it:\n";
        std::cin >> Type;
        std::cout << "Enter number of rooms you want to book: \n";
        std::cin >> numberOfRooms;
        int numberOfRemain = RoomsNumberMap[Type] - numberOfRooms;
        if (numberOfRemain == 0)
        {
            std::cout << "there is no room remain\n";
        }
        else if (numberOfRemain < 0)
        {
            std::cout << "cant book this type of room\n";
        }
        else
        {
            std::cout << "The room booked succefully\n";
            std::cout << "The number of the remaining room is: "<<numberOfRemain<<std::endl;
            Table.insert(Type, numberOfRemain);
            if ((bool)Table.search(Type))
            {
                int NumberOfPrice = numberOfRooms * price; 
                TablePrice.insert(Type, NumberOfPrice);
                std::cout << "the price of " << Type << " is " << TablePrice.search(Type) <<"$" << std::endl;
            }
        }
        
    }
    
    void RemoveRoom()
    {
        std::string Type;
        std::cout << "enter you want to remove: " << std::endl;
        std::getline(std::cin, Type);
        Table.remove(Type);
    }

    void cancleRoom()
    {
        std::string Type;
        std::cout << "enter the type of the booked room:\n";
        std::getline(std::cin, Type);
        if ((bool)RoomBook)
        {
            int roomNumber = Table.search(Type) + numberOfRooms;
            int oldPrice = 0;
            std::cout << "cancled successful" << std::endl;
            Table.insert(Type, roomNumber);
            TablePrice.insert(Type, oldPrice);
            std::cout << "the price is " << TablePrice.search(Type) << std::endl;
        }
        else
        {
            std::cout << "there is no room booked\n";
        }
    }

    void RoomPrice()
    {
        int priceOfType = 0;
        std::cout << "enter th price of each type:\n";
        for (const auto& Type : RoomsType)
        {
            std::cout << Type << " price: ";
            std::cin >> price;
            TablePrice.insert(Type, price);
        }
        for (const auto& Type : RoomsType)
        {
            std::cout << "The price of the " << Type << " is " << TablePrice.search(Type)<<"$\n";
        }
    }