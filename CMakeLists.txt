cmake_minimum_required(VERSION 2.8)

project(segments)

include_directories(.)
	
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

configure_file(${PROJECT_SOURCE_DIR}/cheerpapplication/segments.html ${PROJECT_BINARY_DIR} COPYONLY)

add_executable(${PROJECT_NAME} 
	cheerpapplication/webmain.cpp	
	
	cheerpimplementation/canvas.cpp	
	cheerpimplementation/imagebuffer.cpp		
	
	mock/inputbuffer.cpp
	
	core/canvas.cpp
	core/color.cpp
	core/imagebuffer.cpp
	core/inputbuffer.cpp
	core/scene.cpp
)
