cmake_minimum_required(VERSION 3.8)
project(leetcode)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c BinaryTree/BinaryTree.c LinkedList/LinkedList.c HashMap/HashMap.c Util/Util.c BinaryTree/BinaryTree.h LinkedList/LinkedList.h HashMap/HashMap.h Util/Util.h)
add_executable(leetcode ${SOURCE_FILES})