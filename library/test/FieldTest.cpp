//
// Created by student on 07.06.2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Field.h>
#include <model/Pawn.h>

struct TestSuiteFieldFixture {
    FieldPtr field;
    PawnPtr pawn = nullptr;
    PawnPtr pawn1;

    TestSuiteFieldFixture() {

        pawn1 = make_shared<Pawn>(1);
        field = make_shared<Field>(pawn);
    }

    ~TestSuiteFieldFixture() {

    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuiteField, TestSuiteFieldFixture)

    BOOST_AUTO_TEST_CASE(GetterTest) {

        BOOST_TEST(field->getPawn() == nullptr);
    }

    BOOST_AUTO_TEST_CASE(SetPawnTest) {

        field->setPawn(pawn1);
        BOOST_TEST(field->getPawn() == pawn1);
    }

    BOOST_AUTO_TEST_CASE(RemovePawnTest) {

        field->deletePawn(pawn1);
        BOOST_TEST(field->getPawn() == nullptr);
    }

BOOST_AUTO_TEST_SUITE_END()