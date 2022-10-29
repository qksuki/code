cmake_minimum_required(VERSION 3.23)
project(c C)

set(CMAKE_C_STANDARD 11)

add_executable(c
        c_primer/ans/chapter/chapter_1/1.13.1.c
        c_primer/ans/chapter/chapter_2/2.12.1.c
        c_primer/ans/chapter/chapter_2/2.12.2.c
        c_primer/ans/chapter/chapter_2/2.12.3.c
        c_primer/ans/chapter/chapter_2/2.12.4.c
        c_primer/ans/chapter/chapter_2/2.12.5.c
        c_primer/ans/chapter/chapter_2/2.12.6.c
        c_primer/ans/chapter/chapter_2/2.12.7.c
        c_primer/ans/chapter/chapter_2/2.12.8.c
        testCode/Problem/Course/01/1.c
        testCode/Problem/Course/01/2.c
        testCode/Problem/Course/01/3.c
        testCode/Problem/Course/01/4.c
        testCode/Problem/Course/01/5.c
        testCode/Problem/Course/01/6.c
        testCode/Problem/Course/01/7.c
        testCode/Problem/Course/02/1.c
        testCode/Problem/Course/02/2.c
        testCode/Problem/Course/02/3.c
        testCode/Problem/Course/02/4.c
        testCode/Problem/LuoGu/Level_01/B2064.c)

# 获取cpp文件相对于当前工作路径的相对路径，即文件名
# 工作路径${CMAKE_CURRENT_SOURCE_DIR}就是CMakeList.txt所在的文件夹
file (GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
# 遍历每个文件名
foreach (file ${files})
    # 将去掉后缀的文件名存入exe变量（executable的缩写，不是代表.exe）
    string(REGEX REPLACE "(.+).cpp$" "\\1" exe ${file})
    # 分别生成add_executable(<name> <source>)命令
    add_executable (${exe} ${file})
endforeach ()