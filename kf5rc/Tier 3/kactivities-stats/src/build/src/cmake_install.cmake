# Install script for directory: /home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xKActivitiesStatsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so.5.45.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/bin/libKF5ActivitiesStats.so.5.45.0"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/bin/libKF5ActivitiesStats.so.1"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/bin/libKF5ActivitiesStats.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so.5.45.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5ActivitiesStats.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KActivitiesStats/KActivities/Stats" TYPE FILE FILES
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/Query"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/Terms"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/ResultSet"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/ResultWatcher"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/ResultModel"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KActivitiesStats/Cleaning"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KActivitiesStats/kactivitiesstats" TYPE FILE FILES
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/query.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/terms.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/resultset.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/resultwatcher.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/resultmodel.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/kactivities-stats-v5.45.0-rc1/src/cleaning.h"
    "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/kactivitiesstats_export.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/qt/KF5ActivitiesStats.qch")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/doc/qt" TYPE FILE FILES "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KF5ActivitiesStats.qch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/qt/KF5ActivitiesStats.tags")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/doc/qt" TYPE FILE FILES "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/KF5ActivitiesStats.tags")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xKActivitiesStatsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/libKActivitiesStats.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xKActivitiesStatsx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/qt/mkspecs/modules/qt_KActivitiesStats.pri")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/qt/mkspecs/modules" TYPE FILE FILES "/home/pb/Public/kf5rc/Tier 3/kactivities-stats/src/build/src/qt_KActivitiesStats.pri")
endif()

