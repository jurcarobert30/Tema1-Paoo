#include "Appointment.h"
#include <iostream>
 
// Constructor - inițializarea membrilor folosind lista de inițializare
Appointment::Appointment(const std::string& companyName, int hour)
    : companyName(companyName) {
    appointmentHour = new int(hour);  // Alocăm memorie pe heap
}
 
// Destructor pentru eliberarea memoriei
Appointment::~Appointment() {
    delete appointmentHour;  // Eliberăm memoria alocată dinamic
}
 
// Constructor de copiere
Appointment::Appointment(const Appointment& other)
    : companyName(other.companyName) {
    // Alocăm memorie nouă și copiem valoarea pentru ora programării
    appointmentHour = new int(*other.appointmentHour);
}
 
// Operator de atribuire
Appointment& Appointment::operator=(const Appointment& other) {
    if (this == &other) {
        return *this;  // Verificare auto-atribuire
    }
 
    // Eliberăm memoria existentă
    delete appointmentHour;
 
    // Copiem valorile membrilor
    companyName = other.companyName;
    appointmentHour = new int(*other.appointmentHour);  // Alocăm memorie și copiem valoarea
 
    return *this;
}
 
// Metodă pentru afișarea detaliilor despre programare
void Appointment::display() const {
    std::cout << "Company: " << companyName << ", Appointment Hour: " 
              << *appointmentHour << ":00" << std::endl;
}


