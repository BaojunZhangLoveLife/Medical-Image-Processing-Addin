set(ITKIOHDF5_LOADED 1)
set(ITKIOHDF5_ENABLE_SHARED "1")
set(ITKIOHDF5_DEPENDS "ITKHDF5;ITKIOImageBase")
set(ITKIOHDF5_PUBLIC_DEPENDS "ITKIOImageBase")
set(ITKIOHDF5_TRANSITIVE_DEPENDS "ITKIOImageBase")
set(ITKIOHDF5_PRIVATE_DEPENDS "ITKHDF5")
set(ITKIOHDF5_LIBRARIES "ITKIOHDF5")
set(ITKIOHDF5_INCLUDE_DIRS "${ITK_INSTALL_PREFIX}/include/ITK-5.3")
set(ITKIOHDF5_LIBRARY_DIRS "")
set(ITKIOHDF5_RUNTIME_LIBRARY_DIRS "${ITK_INSTALL_PREFIX}/bin")
set(ITKIOHDF5_TARGETS_FILE "")
set(ITKIOHDF5_FACTORY_NAMES "ImageIO::HDF5")

