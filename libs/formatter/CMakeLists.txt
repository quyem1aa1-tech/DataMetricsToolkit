add_library(formatter STATIC src/formatter.cpp)

target_compile_features(formatter PUBLIC cxx_std_17)

target_include_directories(formatter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)



