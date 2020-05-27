//
// Created by dolev on 24/05/2020.
//
#include"doctest.h"
#include <iostream>
#include "DemoGame.hpp"
TEST_CASE("testSum"){
            CHECK(3+1==2+2); 
            CHECK(6-1==5); 
            CHECK(2==1+1); 
            CHECK(4+10==7*2); 
            CHECK(15-5==5+5); 
            CHECK(1==2-1);
            CHECK(2==3-1);
            CHECK(4.2-1.1==3.1);
            CHECK(2.0+0.5==2.5);
            CHECK(1.5==1.5);
            CHECK(8*2==16);
            CHECK(10==10);
};
TEST_CASE("testtrue"){
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true); 
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
            CHECK(true==true);
};
TEST_CASE("testfalse") {
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
            CHECK(false==false);
};

 
  
