#include "Soldier.hpp"

    class FootSoldier: public Soldier{

    protected:

        //char letter=FS;
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
