add_executable(ScrabbleTest
  scrabble-tests.cpp)

target_link_libraries (ScrabbleTest PUBLIC Scrabble gtest_main)
