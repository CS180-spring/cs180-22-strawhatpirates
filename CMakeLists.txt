cmake_minimum_required(VERSION 3.14)
project(project-thing)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           main
  SOURCE_DIR        "${CMAKE_CURRENT_BINARY_DIR}/googletest-src"
  BINARY_DIR        "${CMAKE_CURRENT_BINARY_DIR}/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


ADD_EXECUTABLE(test
    lib/Person.cpp
    lib/Professor.cpp
    lib/Student.cpp
    lib/test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)