# VCPKG C++ Template

A small template for C++ projects.

## Features

- VCPKG
- CMakePresets
- Support for multiple libraries and executables
- Doxygen
- GTest

## Usage

1. Set appropriate project name in top level `CMakeLists.txt`
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

## TODOs

- Add CI/CD
- Add formatters
