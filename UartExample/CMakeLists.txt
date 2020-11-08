cmake_minimum_required(VERSION 3.15)

project(UartExample LANGUAGES C CXX ASM)

find_bsp(ID com.sysprogs.project_importers.stm32.cubemx
	SOURCE_PROJECT UartExample.ioc)

add_bsp_based_executable(NAME UartExample
	GENERATE_BIN
	GENERATE_MAP
	SOURCES
		${BSP_ROOT}/Loop.h
		${BSP_ROOT}/Loop.cpp
		${BSP_ROOT}/MainClass.cpp
		${BSP_ROOT}/Led.h
		${BSP_ROOT}/Uart.h
		${BSP_ROOT}/Led.cpp
		${BSP_ROOT}/Uart.cpp
		${BSP_ROOT}/MainClass.h)
