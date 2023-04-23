set(CMAKE_CXX_STANDARD 17) # For std::optional
cmake_minimum_required (VERSION 2.8.11)
project (SHOWDOWN)

add_library(lib_showdown 
    suit.cpp
    rank.cpp
    card.cpp
    deck.cpp
    showdown_game.cpp
    player.cpp
)

add_executable(SHOWDOWN 
    main.cpp 
)


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#For Google test
enable_testing()
add_subdirectory(tests)
