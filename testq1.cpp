// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "negarr.h"


TEST_CASE( "test NegArr creation" ) {
    NegArr na;
    for (int i = 0; i < 5;i++){
        int x = na[i];
        REQUIRE( x == -1 );
    }

}
TEST_CASE( "test assign negative val" ) {
    NegArr na;
    na[0] = -2;
    na[1] = -3;
    REQUIRE(na.print() == "-2 -3 -1 -1 -1 ");

}

TEST_CASE( "test assign positive val" ) {
    NegArr na;
    na[0] = 2;
    na[1] = 3;
    REQUIRE(na.print() == "-2 -3 -1 -1 -1 ");

}

TEST_CASE( "test access with [] " ) {
    NegArr na;
    na[0] = 9;
    na[1] = -4;
    int x = na[0];
    int y = na[1];
    REQUIRE( x == -9 );
    REQUIRE( y == -4 );
}
