//
// Created by student on 08.06.2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Pawn.h>

struct TestSuitePawnFixture {
    PawnPtr pawn;
    pair<int, int> testCoords;

    TestSuitePawnFixture() {

        pawn = make_shared<Pawn>(1);
        testCoords = make_pair(1, 1);
    }

    ~TestSuitePawnFixture() {

    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuitePawn, TestSuitePawnFixture)

    BOOST_AUTO_TEST_CASE(GetterTest) {

        BOOST_TEST(pawn->getHeatlh() == 1);
    }

BOOST_AUTO_TEST_SUITE_END()