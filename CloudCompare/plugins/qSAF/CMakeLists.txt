cmake_minimum_required(VERSION 3.0)

option( INSTALL_QSAF_PLUGIN "Check to install qSAF plugin" OFF )

if (INSTALL_QSAF_PLUGIN)

    #CloudCompare ‘SAF’ plugin

    project( QSAF_PLUGIN )
    
    include( ../CMakePluginTpl.cmake )
    
endif()
