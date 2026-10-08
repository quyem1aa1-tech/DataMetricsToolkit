add_library(logger STATIC src/logger.cpp)

target_compile_features(logger PUBLIC cxx_std_17)

target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_options(logger PRIVATE -Wall -Wextra)