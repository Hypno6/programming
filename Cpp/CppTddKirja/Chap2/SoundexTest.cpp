#include "gmock/gmock.h"
#include <gtest/gtest.h>
using ::testing::Eq;

class Soundex {

public:
	std::string encode(const std::string& word) const {
			return word;
	}

};

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
	Soundex soundex;
		
	auto encoded = soundex.encode("A");
	ASSERT_THAT(encoded, Eq("A"));


}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
