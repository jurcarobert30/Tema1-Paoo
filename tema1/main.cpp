#include "Appointment.h"
#include <iostream>
 
int main() {
    // Creez o programare pentru verificarea tahografului
    Appointment appointment1("Ducodan", 10);
    Appointment appointment2("PEJ", 12);
 
    // Afișăm informațiile despre prima programare
    std::cout << "appointment1 details:" << std::endl;
    appointment1.display();
 
    // Afișăm informațiile despre a doua programare
    std::cout << "appointment2 details:" << std::endl;
    appointment2.display();
 
    // Folosim operatorul de atribuire
    appointment2 = appointment1;
 
    // Afișăm informațiile despre a doua programare după atribuire
    std::cout << "After assignment, appointment2 details:" << std::endl;
    appointment2.display();
 
    return 0;
}