#include "Interfaces/IMessage.hpp"
#include "Message/Error.hpp"

#include <stdint.h>

#pragma once

class Exceptions
{
public:
    static void throwException(Error error);
    static void setCommunication(IMessage *message ,void (*sendMessage)(IMessage)); //set communication interface and message class
private:
    static void freezeController(); //start infinite loop

    //variables

    static void (*_sendMessage)(IMessage); //communication interface
    static IMessage *_message; //message to send
};


#include "Exceptions/ExceptionsBase.hpp"
