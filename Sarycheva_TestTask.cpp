#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Surname_Task.h"

using namespace cute;

void testGetNthDigitFromRight_Valid() {
    ASSERT_EQUAL(3, getNthDigitFromRight(12345, 3));
}

void testGetNthDigitFromRight_Invalid() {
    ASSERT_EQUAL(-1, getNthDigitFromRight(123, 4));
}

void testGetNthDigitFromLeft_Valid() {
    ASSERT_EQUAL(2, getNthDigitFromLeft(2578, 1));
}

void testGetNthDigitFromLeft_Invalid() {
    ASSERT_EQUAL(-1, getNthDigitFromLeft(2578, 5));
}

int main() {
    cute::suite s;
    s.push_back(CUTE(testGetNthDigitFromRight_Valid));
    s.push_back(CUTE(testGetNthDigitFromRight_Invalid));
    s.push_back(CUTE(testGetNthDigitFromLeft_Valid));
    s.push_back(CUTE(testGetNthDigitFromLeft_Invalid));

    cute::ide_listener<> listener;
    cute::makeRunner(listener)(s, "All Tests");

    return 0;
}