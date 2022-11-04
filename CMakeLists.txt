project(ProjectName)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--exclude-libs,ALL")
# set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--exclude-libs,libv1.0.a")

add_library(v1.0 lib_v1.0.cpp)

add_library(wrapper SHARED wrapper.cpp)
target_link_libraries(wrapper v1.0)
# target_link_options(wrapper PRIVATE "-Wl, --exclude-libs=libv1.0.a")
# target_link_options(wrapper PRIVATE $<exclude-libs:libv1.0.a>)

add_library(v1.1 SHARED lib_v1.1.cpp)

add_executable(main main.cpp)
target_link_libraries(main wrapper v1.1)
# target_link_options(test PRIVATE "-Wl, -rpath=./")

# add_library(foo SHARED foo.c)