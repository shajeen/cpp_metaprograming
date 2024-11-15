FROM gcc:latest

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends cmake git python3 python3-pip ninja-build

# Install Google Test (gtest)
RUN apt-get update && apt-get install -y libgtest-dev && \
    cd /usr/src/gtest && \
    cmake CMakeLists.txt && \
    make && \
    cp lib/*.a /usr/lib && \
    cd / && \
    rm -rf /var/lib/apt/lists/*