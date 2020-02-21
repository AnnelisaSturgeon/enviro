#ifndef __DIFF_DRIVE_AGENT__H
#define __DIFF_DRIVE_AGENT__H 

#include "enviro.h"

using namespace enviro;

class Block : public Agent {

    public:
    Block(json spec, World& world);
    void init() {}
    void start() {}
    void update();
    void stop() {}

};

DECLARE_INTERFACE(Block)

#endif