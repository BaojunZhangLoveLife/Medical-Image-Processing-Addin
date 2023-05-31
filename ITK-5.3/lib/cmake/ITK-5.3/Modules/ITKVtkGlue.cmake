set(ITKVtkGlue_LOADED 1)
set(ITKVtkGlue_ENABLE_SHARED "1")
set(ITKVtkGlue_DEPENDS "ITKCommon;ITKImageIntensity;ITKVTK")
set(ITKVtkGlue_PUBLIC_DEPENDS "ITKCommon;ITKVTK")
set(ITKVtkGlue_TRANSITIVE_DEPENDS "ITKCommon;ITKImageIntensity;ITKVTK")
set(ITKVtkGlue_PRIVATE_DEPENDS "")
set(ITKVtkGlue_LIBRARIES "ITKVtkGlue")
set(ITKVtkGlue_INCLUDE_DIRS "${ITK_INSTALL_PREFIX}/include/ITK-5.3")
set(ITKVtkGlue_LIBRARY_DIRS "")
set(ITKVtkGlue_RUNTIME_LIBRARY_DIRS "${ITK_INSTALL_PREFIX}/bin")
set(ITKVtkGlue_TARGETS_FILE "")
set(ITKVtkGlue_FACTORY_NAMES "")

set(VTK_DIR "C:/Project/Library-Reconstruction/VMTK-project/VTK-9.1/lib/cmake/vtk-9.1")

find_package(VTK NO_MODULE REQUIRED)

  if(NOT COMMAND vtk_module_config)
    macro(vtk_module_config ns)
       foreach(arg ${ARGN})
        if(${arg} MATCHES "^[Vv][Tt][Kk]")
          string(REGEX REPLACE "^[Vv][Tt][Kk]" "" _arg ${arg})
        else()
          set(_arg ${arg})
        endif()
        set(${ns}_LIBRARIES ${${ns}_LIBRARIES} VTK::${_arg})
       endforeach()
    endmacro()
  endif()

if(NOT VTK_VERSION)
  set(VTK_VERSION "9.1.0")
endif()
if(NOT VTK_RENDERING_BACKEND)
  if(NOT COMMAND vtk_module_config)
    set(VTK_RENDERING_BACKEND OpenGL2)
  else()
    set(VTK_RENDERING_BACKEND OpenGL)
  endif()
endif()
set(_target_freetypeopengl)
if(TARGET VTK::RenderingFreeTypeOpenGL2)
  set(_target_freetypeopengl VTK::RenderingFreeTypeOpenGL2)
endif()

set(_required_vtk_libraries
  VTK::IOImage
  VTK::ImagingSources
  )
if(ITK_WRAP_PYTHON)
  list(APPEND _required_vtk_libraries VTK::WrappingPythonCore)
endif()
if(NOT VTK_RENDERING_BACKEND STREQUAL "None")
  list(APPEND _required_vtk_libraries
    VTK::RenderingOpenGL2
    VTK::RenderingFreeType
    
    VTK::InteractionStyle
    VTK::InteractionWidgets
  )
endif()
vtk_module_config(ITKVtkGlue_VTK
  ${_required_vtk_libraries}
  )
set(ITKVtkGlue_VTK_LIBRARIES ${_required_vtk_libraries})
set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS ${ITKVtkGlue_VTK_DEFINITIONS})

