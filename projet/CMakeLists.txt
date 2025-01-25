cmake_minimum_required(VERSION 3.19)
project(projet LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(projet
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    FileFormatHandler.cpp
    ImageFilter.cpp
    librarySystem.cpp
    FileFormatHandler.h
    LibrarySystem.h
    ImageFilter.h
    readerwindows.h readerwindows.cpp readerwindows.ui
    librarywindow.h librarywindow.cpp librarywindow.ui
    bookwindow.h bookwindow.cpp bookwindow.ui
    createbook.h createbook.cpp createbook.ui
    book.h book.cpp
    page.h page.cpp
    imagebitmap.h imagebitmap.cpp
)
# Indique le répertoire contenant les fichiers d'en-tête de libjpeg-turbo
 include_directories("C:/Users/andre/OneDrive/Documents/librcplusplus/libjpeg-turbo-3.0.1/libjpeg-turbo-3.0.1")

# Indique le répertoire contenant les bibliothèques compilées de libjpeg-turbo
link_directories("C:/Users/andre/OneDrive/Documents/librcplusplus/libjpeg-turbo-3.0.1/libjpeg-turbo-3.0.1")
#jpeg

target_link_libraries(projet
    PRIVATE
        Qt::Core
        Qt::Widgets

)

include(GNUInstallDirs)


install(TARGETS projet
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET projet
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
