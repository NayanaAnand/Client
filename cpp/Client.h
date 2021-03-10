#ifndef CLIENT_I_IMPL_H
#define CLIENT_I_IMPL_H

#include "Client_base.h"

class Client_i : public Client_base
{
    ENABLE_LOGGING
    public:
        Client_i(const char *uuid, const char *label);
        ~Client_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // CLIENT_I_IMPL_H
