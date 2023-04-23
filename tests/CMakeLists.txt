## Reference: https://shrishailsgajbhar.github.io/post/Programming-TTD-Using-Cpp-Google-Test
include(CTest)
set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY}
    test_card.cpp
    test_deck.cpp
    test_showdown_game.cpp
)

target_link_libraries(${TEST_BINARY} lib_showdown gtest gtest_main pthread)
add_test(test_1 tests/test_card.cpp)
add_test(test_2 tests/test_deck.cpp)
add_test(test_3 tests/test_showdown_game.cpp)
    
