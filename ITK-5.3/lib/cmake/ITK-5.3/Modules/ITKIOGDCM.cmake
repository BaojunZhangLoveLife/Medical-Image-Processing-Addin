set(ITKIOGDCM_LOADED 1)
set(ITKIOGDCM_ENABLE_SHARED "1")
set(ITKIOGDCM_DEPENDS "ITKCommon;ITKGDCM;ITKIOImageBase")
set(ITKIOGDCM_PUBLIC_DEPENDS "ITKCommon;ITKIOImageBase")
set(ITKIOGDCM_TRANSITIVE_DEPENDS "ITKCommon;ITKIOImageBase")
set(ITKIOGDCM_PRIVATE_DEPENDS "ITKGDCM")
set(ITKIOGDCM_LIBRARIES "ITKIOGDCM")
set(ITKIOGDCM_INCLUDE_DIRS "${ITK_INSTALL_PREFIX}/include/ITK-5.3")
set(ITKIOGDCM_LIBRARY_DIRS "")
set(ITKIOGDCM_RUNTIME_LIBRARY_DIRS "${ITK_INSTALL_PREFIX}/bin")
set(ITKIOGDCM_TARGETS_FILE "")
set(ITKIOGDCM_FACTORY_NAMES "ImageIO::GDCM")
