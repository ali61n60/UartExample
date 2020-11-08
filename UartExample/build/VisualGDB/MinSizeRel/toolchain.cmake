SET(CMAKE_SYSTEM_NAME Generic)
SET(VISUALGDB_TOOLCHAIN_TYPE Embedded)
SET(VISUALGDB_TOOLCHAIN_SUBTYPE GCC)
if(DEFINED CCACHE_EXE)
SET(CMAKE_C_COMPILER "${CCACHE_EXE}" "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-gcc.exe")
SET(CMAKE_CXX_COMPILER "${CCACHE_EXE}" "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-g++.exe")
SET(CMAKE_ASM_COMPILER "${CCACHE_EXE}" "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-g++.exe")
SET(CMAKE_AR "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-ar.exe")
SET(CMAKE_OBJCOPY "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-objcopy.exe")
else()
SET(CMAKE_C_COMPILER "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-gcc.exe")
SET(CMAKE_CXX_COMPILER "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-g++.exe")
SET(CMAKE_ASM_COMPILER "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-g++.exe")
endif()
SET(CMAKE_LD "${TOOLCHAIN_ROOT}/bin/arm-none-eabi-ld.exe")

if(EXISTS "$ENV{TOOLCHAIN_ROOT}/Qt/v5-CMake/Qt5Cross.cmake")
	include("$ENV{TOOLCHAIN_ROOT}/Qt/v5-CMake/Qt5Cross.cmake")
endif()

#Barebone toolchain cannot link executables without a device-specific linker script
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(CMAKE_OBJECT_PATH_MAX 200)
set(KNOWN_PATH_PREFIX_VARIABLES "" CACHE STRING "Specifies the list of variables like 'BSP_ROOT' that will be substituted by the IDE when referencing source files." FORCE)

function (visualgdb_toolchain_load_default_configuration)
endfunction() #visualgdb_toolchain_load_default_configuration

function (visualgdb_toolchain_compute_flags)
endfunction() #visualgdb_toolchain_compute_flags



set (VISUALGDB_COMPONENT_LISTS_DIR "C:/Users/ali/AppData/Local/VisualGDB")
include ("C:/Program Files (x86)/Sysprogs/VisualGDB/CMake/embedded/root.cmake")
