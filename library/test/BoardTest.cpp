//
// Created by student on 07.06.2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Board.h>

struct TestSuiteBoardFixture {
    vector<PawnPtr> pawnsA;
    vector<PawnPtr> pawnsB;
    BoardPtr board;

    TestSuiteBoardFixture() {

        for(int i = 0; i < 12; i++){

            pawnsA.push_back(make_shared<Pawn>(1));
            pawnsB.push_back(make_shared<Pawn>(1));
        }

        board = make_shared<Board>(pawnsA, pawnsB);
    }

    ~TestSuiteBoardFixture() {

    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuiteBoard, TestSuiteBoardFixture)

    BOOST_AUTO_TEST_CASE(GetterTest) {

        BOOST_TEST(board->getWidth() == 8);
        BOOST_TEST(board->getHeight() == 8);
    }

    BOOST_AUTO_TEST_CASE(GetFieldTest) {

        BOOST_TEST(board->getField(0, 0)->getPawn() == nullptr);
    }

    BOOST_AUTO_TEST_CASE(IsOutOftheBoardFalseTest) {

        BOOST_TEST(board->isEndOfTheBoard(make_pair(0, 0)) == false);
    }

    BOOST_AUTO_TEST_CASE(IsOutOftheBoardTrueTest) {

        BOOST_TEST(board->isEndOfTheBoard(make_pair(0, 20)) == true);
    }

BOOST_AUTO_TEST_SUITE_END()