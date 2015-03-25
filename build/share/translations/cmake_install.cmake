# Install script for directory: /home/tom/Desktop/Development/keepassx/share/translations

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/keepassx/translations" TYPE FILE FILES
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-ja_JP.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-zh_TW.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-de.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-zh_CN.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx_it.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx_en_plurals.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx_nl_NL.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-bb_BK.qm"
    "/home/tom/Desktop/Development/keepassx/build/share/translations/keepassx-sv_SE.qm"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

