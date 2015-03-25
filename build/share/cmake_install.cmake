# Install script for directory: /home/tom/Desktop/Development/keepassx/share

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/keepassx/icons/database" TYPE FILE FILES
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C65_W.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C63_Feather.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C10_Kontact.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C43_EditTrash.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C66_Money.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C07_Kate.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C51_Decrypted.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C49_Folder_Blue_Open.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C21_KOrganizer.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C39_History.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C00_Password.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C18_Display.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C48_Folder.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C08_Socket.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C67_Certificate.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C60_KFM_Home.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C47_KPackage.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C62_Tux.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C33_Run.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C01_Package_Network.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C05_Edu_Languages.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C37_KPercentage.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C38_Samba_Unmount.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C44_KNotes.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C35_KRFB.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C45_Cancel.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C29_KGPG_Term.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C56_KAddressBook.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C34_Configure.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C26_FileSave.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C20_Misc.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C03_Server.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C50_Folder_Tar.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C55_Thumbnail.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C40_Mail_Find.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C58_KGPG.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C59_Package_Development.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C32_FSView.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C25_Folder_Mail.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C30_Konsole.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C11_Camera.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C54_Signature.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C13_KGPG_Key3.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C23_Icons.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C04_Klipper.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C19_Mail_Generic.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C17_CDROM_Unmount.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C16_Mozilla_Firebird.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C27_NFS_Unmount.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C12_IRKickFlash.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C02_MessageBox_Warning.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C31_FilePrint.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C15_Scanner.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C53_Apply.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C68_BlackBerry.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C06_KCMDF.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C57_View_Text.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C42_KCMMemory.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C64_Apple.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C24_Connect_Established.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C46_Help.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C61_Services.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C41_VectorGfx.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C36_Ark.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C22_ASCII.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C28_QuickTime.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C52_Encrypted.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C09_Identity.png"
    "/home/tom/Desktop/Development/keepassx/share/icons/database/C14_Laptop_Power.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor" TYPE DIRECTORY FILES "/home/tom/Desktop/Development/keepassx/share/icons/application/" FILES_MATCHING REGEX "/keepassx\\.png$" REGEX "/keepassx\\.svgz$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor" TYPE DIRECTORY FILES "/home/tom/Desktop/Development/keepassx/share/icons/application/" FILES_MATCHING REGEX "/application\\-x\\-keepassx\\.png$" REGEX "/application\\-x\\-keepassx\\.svgz$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/tom/Desktop/Development/keepassx/share/linux/keepassx.desktop")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE FILES "/home/tom/Desktop/Development/keepassx/share/linux/keepassx.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/keepassx/icons/application" TYPE DIRECTORY FILES "/home/tom/Desktop/Development/keepassx/share/icons/application/" FILES_MATCHING REGEX "/[^/]*\\.png$" REGEX "/[^/]*\\.svgz$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/tom/Desktop/Development/keepassx/build/share/translations/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

