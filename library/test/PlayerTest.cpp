//
// Created by student on 08.06.2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Player.h>
#include <model/HumanPlayer.h>
#include <model/Pawn.h>

struct TestSuitePlayerFixture {
    PlayerPtr player1;
    PlayerPtr player2;
    vector<PawnPtr> pawnsA;
    vector<PawnPtr> pawnsB;

    TestSuitePlayerFixture() {

        for(int i = 0; i < 12; i++){

            pawnsA.push_back(make_shared<Pawn>(1));
            pawnsB.push_back(make_shared<Pawn>(1));
        }

        player1 = make_shared<HumanPlayer>(pawnsA);
        player2 = make_shared<HumanPlayer>(pawnsB);
    }

    ~TestSuitePlayerFixture() {

    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuitePlayer, TestSuitePlayerFixture)

    BOOST_AUTO_TEST_CASE(GetterTest) {

        BOOST_TEST(player1->getPawns() == pawnsA);
        BOOST_TEST(player2->getPawns() == pawnsB);
    }

    /*BOOST_AUTO_TEST_CASE(IsAliveTrueTest) {

        BOOST_TEST(player1->isAlive1() == true);
        BOOST_TEST(player2->isAlive1() == true);
    }

    BOOST_AUTO_TEST_CASE(IsAliveFalseTest) {

        player1->setIsAlive(false);
        player2->setIsAlive(false);
        BOOST_TEST(player1->isAlive1() == false);
        BOOST_TEST(player2->isAlive1() == false);
    }*/

BOOST_AUTO_TEST_SUITE_END()