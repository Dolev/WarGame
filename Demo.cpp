/**
  Demo for the war-game exercise.

  @author Oz Levi
  @since  2020-05
**/

#include <iostream>
#include "DemoGame.hpp"  

using namespace std;

int main() {
	WarGame::DemoGame demoGame;
/*    if(demoGame.play()==3){
        cout << "tie \n " << endl;
    }*/
    else{
	cout << "The winner is:\n " << demoGame.play() << endl;
    //}
    return 0;
}
