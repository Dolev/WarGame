#pragma once

#include <sys/param.h>

class Soldier{
    //virtual char letter const =S;
private:
    int damage;

    int Player;

    int health;

public:
    Soldier();
    Soldier(int health , int damege):health(health), damage(damege){}
    explicit Soldier(int Player);
    ~Soldier();
public:
    int getPlayer() const{ return Player;  }

    int gethealth()   const{ return health;    }

    int getdamege() const{ return damage;  }

    //char getletter() const { return letter; }

    void setHealth(int health)   { this->health=health;    }
};