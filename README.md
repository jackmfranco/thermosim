# thermosim

A command-line based thermodynamic system simulator.

Utilizes the [CoolProp](https://github.com/CoolProp/CoolProp) thermophysical property database under the MIT License.

# Build Procedure
A simple example of how to use the cmake build system and integrate with CoolProp

Prereqs:
* Python
* git
* A compiler/build system (visual studio, OSX, g++, etc.)

Start a command prompt!!

1. Do a recursive checkout of this example:
```
git clone --recursive https://github.com/CoolProp/simple_cmake_example
```
2. Move into the directory
```
cd simple_cmake_example
```
3. Make directories
```
mkdir build && cd build
```
4. Run cmake to generate build system
```
cmake .. 
```
5. Build!
```
cmake --build .
```

### Attribution

Many thanks to the developers of CoolProp for allowing their hard work to be used freely.

A paper covering CoolProp has been published in the Journal Industrial & Engineering Chemistry Research with an OpenAccess license:

I. H. Bell, J. Wronski, S. Quoilin, and V. Lemort, “[Pure and Pseudo-pure Fluid Thermophysical Property Evaluation and the Open-Source Thermophysical Property Library CoolProp](http://pubs.acs.org/doi/abs/10.1021/ie4033999),” Industrial & Engineering Chemistry Research, vol. 53, no. 6, pp. 2498–2508, 2014, doi: 10.1021/ie4033999.
