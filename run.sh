!/bin/sh
#查看当前系统，目前只支持x86架构的类UNIX系统（Linux和MAC OS）
OS=`uname -s`
if [ "${OS}" == "Linux" ]; then
    toolchain="./cmake/linux_x86_toolchain.cmake"
else if [ "${OS}" == "Darwin" ]; then
    toolchain="./cmake/mac_x86_toolchain.cmake"
    fi
fi

# 重新编译
mkdir -p ./build/
rm -rf ./build/*
cd ./build
cmake -DCMAKE_TOOLCHAIN_FILE=${toolchain} ..
make
cd ../