#pragma once

#include <sys/param.h>

class Soldier{

private:
    int damage;

    int Player;

    int health;

  //  char letter;
public:
    //char letter const =S;
    Soldier();
    Soldier(int health , int damege):health(health), damage(damege){}
    explicit Soldier(int Player);
    ~Soldier();
// just  soldier functions
    int getPlayer() const{ return Player;  }

    int gethealth()   const{ return health;    }

    int getdamege() const{ return damage;  }

    //char getletter() const { return letter; }

    void setHealth(int health)   { this->health=health;    }
};