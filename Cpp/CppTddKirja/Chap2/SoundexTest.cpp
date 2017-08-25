#include "gmock/gmock.h"
#include <gtest/gtest.h>


class Soundex {
};

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
	Soundex soundex;
	}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
