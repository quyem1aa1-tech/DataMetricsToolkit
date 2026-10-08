add_library(stats STATIC src/stats.cpp)

target_compile_features(stats PUBLIC cxx_std_17)

target_include_directories(stats PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(stats PRIVATE logger)



