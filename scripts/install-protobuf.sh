#!/bin/sh
set -ex
wget https://github.com/protocolbuffers/protobuf/releases/download/v3.10.0/protobuf-cpp-3.10.0.zip
unzip protobuf-cpp-3.10.0.zip
cd protobuf-3.10.0 && ./configure --prefix=/usr && make && sudo make install