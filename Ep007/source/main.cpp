#include <iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"

int main() {
    
    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello there", LogType::FATAL_ERROR);
    
    return 0;
}