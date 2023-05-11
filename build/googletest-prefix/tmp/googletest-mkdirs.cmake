# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-src"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-build"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/tmp"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/src/googletest-stamp"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/src"
  "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/src/googletest-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/src/googletest-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/dieyes/Documents/GitHub/cs180-22-strawhatpirates/build/googletest-prefix/src/googletest-stamp${cfgdir}") # cfgdir has leading slash
endif()
