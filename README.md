![C++](https://img.shields.io/badge/language-C%2B%2B-blue)
![CMake](https://img.shields.io/badge/build-CMake-green)
![vcpkg](https://img.shields.io/badge/deps-vcpkg-ff69b4)

<!-- Use in GitHub -->
[![Actions Status](https://github.com/janicberger/CppTemplate/workflows/Build/badge.svg)](https://github.com/janicberger/CppTemplate/actions)
[![Actions Status](https://github.com/janicberger/CppTemplate/workflows/Lint/badge.svg)](https://github.com/janicberger/CppTemplate/actions)
[![codecov](https://codecov.io/gh/janicberger/CppTemplate/branch/main/graph/badge.svg)](https://codecov.io/gh/janicberger/CppTemplate)

<!-- Use in GitLab -->
[![pipeline](https://gitlab.fhnw.ch/janic.berger/CppTemplate/badges/main/pipeline.svg)](https://gitlab.fhnw.ch/janic.berger/CppTemplate/-/pipelines?ref=main)
![coverage](https://gitlab.fhnw.ch/janic.berger/CppTemplate/badges/main/coverage.svg?job=coverage)

# VCPKG C++ Template

A small template for C++ projects.

## Features

- VCPKG
- CMakePresets
- Support for multiple libraries and executables
- Doxygen
- GTest

## Usage

1. Set appropriate project name in top level `CMakeLists.txt` and `docs/CMakeLists.txt`
2. Add dependencies to `vcpkg.json`.
3. Add libraries to `libs`:
    ```
    <ProjectName>/
    ├─ libs/
    │  ├─ CMakeLists.txt 
    │  ├─ <LibName>/ 
    │  │  ├─ include/ 
    │  │  │  ├─ <ProjectAcronym>/ 
    │  │  │  │  ├─ <LibName>/ 
    │  │  │  │  │  ├─ <PublicHeaders...> 
    │  │  ├─ src/ 
    │  │  │  ├─ <SourceFiles...> 
    ```
4. Add executables to `apps`.
5. Add tests to `tests`.
6. Build documentation with the `docs` CMake target.
7. Customize CI/CD
