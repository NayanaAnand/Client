#include <iostream>
#include "ossie/ossieSupport.h"

#include "Client.h"
int main(int argc, char* argv[])
{
    Client_i* Client_servant;
    Component::start_component(Client_servant, argc, argv);
    return 0;
}

