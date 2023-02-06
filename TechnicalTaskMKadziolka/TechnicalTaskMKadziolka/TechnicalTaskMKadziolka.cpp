#include <iostream>

#include "PhoneManager.h"

//class to manage phones- PhoneManager
// // Phones stored in Vector container 
//PhoneManager will use class Phone for each phone to store informations


int main()
{
    PhoneManager manager;

    manager.addPhone();
    //manager.addPhone();
    //manager.addPhone();
    manager.printAllPhones();
    manager.deletePhone();
    manager.printAllPhones();
}


