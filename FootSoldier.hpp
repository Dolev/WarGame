#include "Soldier.hpp"

    class FootSoldier: public Soldier{
        // char letter const =FS;
    protected:
        int damage = 100;
        /*   Direction Options:
      Up, Down, Right, Left
      FootSoldier Up();
      FootSoldier Down();
      FootSoldier Left();
      FootSoldier Right();
      */
    public:
        FootSoldier();
        ~FootSoldier();
        explicit FootSoldier(int player);
    };
