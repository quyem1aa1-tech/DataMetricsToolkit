add_executable(datametrics main.cpp)

target_compile_features(datametrics PRIVATE cxx_std_17)

target_link_libraries(datametrics PRIVATE
    stats
    logger
    formatter
)

target_compile_options(datametrics PRIVATE -Wall -Wextra)