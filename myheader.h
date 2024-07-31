#ifndef MYHEADERFILE_H
#define MYHEADERFILE_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Train
{
public:
    std::string trainNumber;
    std::string trainName;
    std::string source;
    std::string destination;
    std::string arrivalTime;
    std::string departureTime;
    float fare;

    Train() {}
    Train(std::string tNum, std::string tName, std::string src, std::string dest, std::string arr, std::string dep, float f)
        : trainNumber(tNum), trainName(tName), source(src), destination(dest), arrivalTime(arr), departureTime(dep), fare(f) {}

    void displayTrain() const;
};

class Passenger
{
public:
    std::string name;
    int age;
    std::string gender;
    std::string contact;

    Passenger() {}
    Passenger(std::string n, int a, std::string g, std::string c)
        : name(n), age(a), gender(g), contact(c) {}

    void displayPassenger() const;
};

class Ticket
{
public:
    int pnr;
    std::string trainNumber;
    std::vector<Passenger> passengers;
    float totalFare;

    Ticket() {}
    Ticket(int p, std::string tNum, std::vector<Passenger> pass, float fare)
        : pnr(p), trainNumber(tNum), passengers(pass), totalFare(fare) {}

    void displayTicket() const;
};

class ECatering
{
public:
    int orderNumber;
    std::string foodItem;
    int quantity;
    float price;

    ECatering() {}
    ECatering(int ordNum, std::string food, int qty, float pr)
        : orderNumber(ordNum), foodItem(food), quantity(qty), price(pr) {}

    void displayOrder() const;
};

class Admin
{
public:
    void addTrain();
    void viewAllTrains();
    void viewBookings();
};

class User
{
public:
    std::string name;
    std::string trainNumber;
    std::string source;
    std::string destination;
    int numTickets;

    User() {}
    User(std::string n, std::string tNum, std::string src, std::string dest, int numT)
        : name(n), trainNumber(tNum), source(src), destination(dest), numTickets(numT) {}

    void displayBooking() const;
};

#endif // MYHEADERFILE_H
