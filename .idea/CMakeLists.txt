cmake_minimum_required(VERSION 4.0)
project(_idea)

set(CMAKE_CXX_STANDARD 14)

add_executable(_idea
        c_cpp_properties.json
        editor.xml
        modules.xml
        Skills.iml
        vcs.xml
        workspace.xml
        "../chapter one patterns/pattern7.cpp"
        "../chapter one patterns/pattern8.cpp"
        "../chapter one patterns/pattern9.cpp"
        "../chapter one patterns/pattern10.cpp")
