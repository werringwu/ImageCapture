# ----------------------------------------------------------------------------
#  Root CMake file for OpenCV
#
#    From the off-tree build directory, invoke:
#      $ cmake <PATH_TO_OPENCV_ROOT>
#
#
#   - OCT-2008: Initial version <joseluisblancoc@gmail.com>
#
# ----------------------------------------------------------------------------


# Following block can broke build in case of cross-compilng
# but CMAKE_CROSSCOMPILING variable will be set only on project(OpenCV) command
# ----------------------------------------------------------------------------
#  Detect 3rd-party libraries
# ----------------------------------------------------------------------------

# ----------------------------------------------------------------------------
#  Detect other 3rd-party libraries/tools
# ----------------------------------------------------------------------------
PROJECT(myImageCapture)   
# //这是建立一个工程项目（类似于我们VS中建立C++项目一样），括号里面时工程名,工程名我们可以任意给，最后程序编译出来的可执行文件就是这个名字
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
#　//这是对CMake工具最低版本要求，这里我们要检查下我们的CMake工具的版本信息，我们可以使用命令“cmake --version”查看
FIND_PACKAGE( OpenCV REQUIRED ) 
# //这是cmake用来查找opencv包用的，不用改
# Declare the target (an executable)
ADD_EXECUTABLE(myImageCapture  cvCamp.cpp)
# //这里括号里面的两个参数分别是工程项目名和我们要编译文件名的意思，记住中间一空格键隔开
TARGET_LINK_LIBRARIES(myImageCapture ${OpenCV_LIBS})
# //这是我们链接到OpenCV库的环节，我们只要更改前面第一个参数位我们的工程项目名即可

#MESSAGE(STATUS 'OpenCV_LIBS: ${OpenCV_LIBS}')     //好了，就修改这么点东西，保存，关闭。
