#ifndef __NeoEMU_MAGEPLAYER_H
#define __NeoEMU_MAGEPLAYER_H

#include "Player.h"

class MagePlayer: public Player
{
public:
    MagePlayer(WorldSession * session): Player(session) {}
    virtual uint8 getClass() const { return CLASS_MAGE; }
};

#endif