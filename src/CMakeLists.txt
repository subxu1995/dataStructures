find_package(OpenCV REQUIRED)

add_executable(dataStructures
        exercises.cpp)

target_link_libraries(dataStructures ${OpenCV_LIBS})
