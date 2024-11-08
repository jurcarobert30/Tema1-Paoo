#pragma once

#include <string>
 
class Appointment {
private:
    std::string companyName;
    int* appointmentHour;  // Ora programării alocată dinamic
 
public:
    // Constructor
    Appointment(const std::string& companyName, int hour);
 
    // Destructor
    ~Appointment();
 
    // Constructor de copiere
    Appointment(const Appointment& other);
 
    // Operator de atribuire
    Appointment& operator=(const Appointment& other);
 
    // Metodă pentru afișarea informațiilor despre programare
    void display() const;
};