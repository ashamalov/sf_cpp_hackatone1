#ifndef _SENDER_H
#define _SENDER_H

#include <iostream>
#include "Messages.h"

using namespace std;

class Sender {
  public:
    Sender();

    virtual ~Sender();

    Sender(Sender & source);

    Sender(const Sender & source);

    Sender & operator=(Sender & source);

    Sender & operator=(const Sender & source);

    friend  ostream & operator<<(ostream & os, const Sender & x);

	bool send(Messages &msg);

};
#endif
