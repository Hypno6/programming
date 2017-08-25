#include "gmock/gmock.h"
#include <gtest/gtest.h>


class Soundex {

public:
	std::string encode(const std::string& word) const {
			return "";
	}

};

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
	Soundex soundex;
	
	auto a = 1+2;
	
	auto encoded = soundex.encode("A");
	}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
