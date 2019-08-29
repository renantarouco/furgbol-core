furgbol-core
============

The core repository of libraries and tools necessary for other furgbol projects.
This project contains libs and scripts implemented by us to be used by other
furgbol modules. It also includes third-party libs adopted to support our chosen
programming style among our projects.

#### Usage

```bash
git clone https://github.com/furgbol/furgbol-core.git
cd furgbol-core
mkdir build && cd build
cmake ..
make
make install
```

The libraries will be installed into the project's directory under the *lib*
directory and the headers will be installed in the *include* directory with a
subdirectory for each subproject. To include headers in your project add
*${FURGBOL_CORE_DIR}/include* to your CMake's `include_directories` call and
link your targes against any library within *${FURGBOL_CORE_DIR}/lib*.
