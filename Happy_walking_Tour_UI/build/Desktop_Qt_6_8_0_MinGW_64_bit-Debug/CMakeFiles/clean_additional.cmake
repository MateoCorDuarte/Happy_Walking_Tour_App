# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Happy_walking_Tour_UI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Happy_walking_Tour_UI_autogen.dir\\ParseCache.txt"
  "Happy_walking_Tour_UI_autogen"
  )
endif()
