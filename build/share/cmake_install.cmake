# Install script for directory: /Users/nma/Source/keepassx/share

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Applications")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/KeePassX.app/Contents/Resources/icons/database" TYPE FILE FILES
    "/Users/nma/Source/keepassx/share/icons/database/C00_Password.png"
    "/Users/nma/Source/keepassx/share/icons/database/C01_Package_Network.png"
    "/Users/nma/Source/keepassx/share/icons/database/C02_MessageBox_Warning.png"
    "/Users/nma/Source/keepassx/share/icons/database/C03_Server.png"
    "/Users/nma/Source/keepassx/share/icons/database/C04_Klipper.png"
    "/Users/nma/Source/keepassx/share/icons/database/C05_Edu_Languages.png"
    "/Users/nma/Source/keepassx/share/icons/database/C06_KCMDF.png"
    "/Users/nma/Source/keepassx/share/icons/database/C07_Kate.png"
    "/Users/nma/Source/keepassx/share/icons/database/C08_Socket.png"
    "/Users/nma/Source/keepassx/share/icons/database/C09_Identity.png"
    "/Users/nma/Source/keepassx/share/icons/database/C10_Kontact.png"
    "/Users/nma/Source/keepassx/share/icons/database/C11_Camera.png"
    "/Users/nma/Source/keepassx/share/icons/database/C12_IRKickFlash.png"
    "/Users/nma/Source/keepassx/share/icons/database/C13_KGPG_Key3.png"
    "/Users/nma/Source/keepassx/share/icons/database/C14_Laptop_Power.png"
    "/Users/nma/Source/keepassx/share/icons/database/C15_Scanner.png"
    "/Users/nma/Source/keepassx/share/icons/database/C16_Mozilla_Firebird.png"
    "/Users/nma/Source/keepassx/share/icons/database/C17_CDROM_Unmount.png"
    "/Users/nma/Source/keepassx/share/icons/database/C18_Display.png"
    "/Users/nma/Source/keepassx/share/icons/database/C19_Mail_Generic.png"
    "/Users/nma/Source/keepassx/share/icons/database/C20_Misc.png"
    "/Users/nma/Source/keepassx/share/icons/database/C21_KOrganizer.png"
    "/Users/nma/Source/keepassx/share/icons/database/C22_ASCII.png"
    "/Users/nma/Source/keepassx/share/icons/database/C23_Icons.png"
    "/Users/nma/Source/keepassx/share/icons/database/C24_Connect_Established.png"
    "/Users/nma/Source/keepassx/share/icons/database/C25_Folder_Mail.png"
    "/Users/nma/Source/keepassx/share/icons/database/C26_FileSave.png"
    "/Users/nma/Source/keepassx/share/icons/database/C27_NFS_Unmount.png"
    "/Users/nma/Source/keepassx/share/icons/database/C28_QuickTime.png"
    "/Users/nma/Source/keepassx/share/icons/database/C29_KGPG_Term.png"
    "/Users/nma/Source/keepassx/share/icons/database/C30_Konsole.png"
    "/Users/nma/Source/keepassx/share/icons/database/C31_FilePrint.png"
    "/Users/nma/Source/keepassx/share/icons/database/C32_FSView.png"
    "/Users/nma/Source/keepassx/share/icons/database/C33_Run.png"
    "/Users/nma/Source/keepassx/share/icons/database/C34_Configure.png"
    "/Users/nma/Source/keepassx/share/icons/database/C35_KRFB.png"
    "/Users/nma/Source/keepassx/share/icons/database/C36_Ark.png"
    "/Users/nma/Source/keepassx/share/icons/database/C37_KPercentage.png"
    "/Users/nma/Source/keepassx/share/icons/database/C38_Samba_Unmount.png"
    "/Users/nma/Source/keepassx/share/icons/database/C39_History.png"
    "/Users/nma/Source/keepassx/share/icons/database/C40_Mail_Find.png"
    "/Users/nma/Source/keepassx/share/icons/database/C41_VectorGfx.png"
    "/Users/nma/Source/keepassx/share/icons/database/C42_KCMMemory.png"
    "/Users/nma/Source/keepassx/share/icons/database/C43_EditTrash.png"
    "/Users/nma/Source/keepassx/share/icons/database/C44_KNotes.png"
    "/Users/nma/Source/keepassx/share/icons/database/C45_Cancel.png"
    "/Users/nma/Source/keepassx/share/icons/database/C46_Help.png"
    "/Users/nma/Source/keepassx/share/icons/database/C47_KPackage.png"
    "/Users/nma/Source/keepassx/share/icons/database/C48_Folder.png"
    "/Users/nma/Source/keepassx/share/icons/database/C49_Folder_Blue_Open.png"
    "/Users/nma/Source/keepassx/share/icons/database/C50_Folder_Tar.png"
    "/Users/nma/Source/keepassx/share/icons/database/C51_Decrypted.png"
    "/Users/nma/Source/keepassx/share/icons/database/C52_Encrypted.png"
    "/Users/nma/Source/keepassx/share/icons/database/C53_Apply.png"
    "/Users/nma/Source/keepassx/share/icons/database/C54_Signature.png"
    "/Users/nma/Source/keepassx/share/icons/database/C55_Thumbnail.png"
    "/Users/nma/Source/keepassx/share/icons/database/C56_KAddressBook.png"
    "/Users/nma/Source/keepassx/share/icons/database/C57_View_Text.png"
    "/Users/nma/Source/keepassx/share/icons/database/C58_KGPG.png"
    "/Users/nma/Source/keepassx/share/icons/database/C59_Package_Development.png"
    "/Users/nma/Source/keepassx/share/icons/database/C60_KFM_Home.png"
    "/Users/nma/Source/keepassx/share/icons/database/C61_Services.png"
    "/Users/nma/Source/keepassx/share/icons/database/C62_Tux.png"
    "/Users/nma/Source/keepassx/share/icons/database/C63_Feather.png"
    "/Users/nma/Source/keepassx/share/icons/database/C64_Apple.png"
    "/Users/nma/Source/keepassx/share/icons/database/C65_W.png"
    "/Users/nma/Source/keepassx/share/icons/database/C66_Money.png"
    "/Users/nma/Source/keepassx/share/icons/database/C67_Certificate.png"
    "/Users/nma/Source/keepassx/share/icons/database/C68_BlackBerry.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/KeePassX.app/Contents/Resources" TYPE FILE FILES "/Users/nma/Source/keepassx/share/macosx/keepassx.icns")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/KeePassX.app/Contents/Resources/icons/application" TYPE DIRECTORY FILES "/Users/nma/Source/keepassx/share/icons/application/" FILES_MATCHING REGEX "/[^/]*\\.png$" REGEX "/[^/]*\\.svgz$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/nma/Source/keepassx/build/share/translations/cmake_install.cmake")

endif()

