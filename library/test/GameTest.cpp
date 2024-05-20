//
// Created by student on 08.06.2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Player.h>
#include <model/HumanPlayer.h>
#include <model/Pawn.h>
#include <model/Game.h>
#include <model/Board.h>

struct TestSuiteGameFixture {
    PlayerPtr player1;
    PlayerPtr player2;
    vector<PawnPtr> pawnsA;
    vector<PawnPtr> pawnsB;
    BoardPtr board;

    TestSuiteGameFixture() {

        for(int i = 0; i < 12; i++){

            pawnsA.push_back(make_shared<Pawn>(1));
            pawnsB.push_back(make_shared<Pawn>(1));
        }

        player1 = make_shared<HumanPlayer>(pawnsA);
        player2 = make_shared<HumanPlayer>(pawnsB);
        board = make_shared<Board>(player1->getPawns(), player2->getPawns());
    }

    ~TestSuiteGameFixture() {

    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuiteGame, TestSuiteGameFixture)

    BOOST_AUTO_TEST_CASE(GetterTest) {

        Game game(board, player1, player2);
        BOOST_TEST(game.isRunning() == true);
    }

    BOOST_AUTO_TEST_CASE(SetRunningFalseTest) {

        Game game(board, player1, player2);
        game.setIsRunning(false);
        BOOST_TEST(game.isRunning() == false);
    }


BOOST_AUTO_TEST_SUITE_END()