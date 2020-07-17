# Chess 2
A chess program.

## Cloning the repository
To clone the repository issue the following command:
```shell script
git clone --recursive https://github.com/msperkow/chess2.git
```

## Compilation
To compile the project you will need to install SDL2, OpenGL and GLEW libraries.

On Linux Debian, this can be achieved using the following command:
```shell script
sudo apt install libsdl2-dev libopengl-dev libglew-dev
```

The project's build environment is Cmake and only available compilation instructions are for it.

To compile the project using Cmake issue the following commands from the projects root folder:
```shell script
mkdir build
cd build
cmake ../
make
```

## Contributing

All external contributors are welcome!
To contribute you'll have to fork the repository, commit changes in the forked repo and
then open a pull request. Please use issues numbers in commits, i.e. "#1: Do something".
Github automatically links those commits with the issue. Each change should have an issue
open beforehand. Please add the issue number in PR as well.

If you want to contribute please:

- use 8 spaces for tabs
- don't exceed 120 chars per line
- put braces on their own lines always; use Allman style
- comment your code, use concise sentences, especially explain inputs and outputs in the case of methods, or how they change the state of the object
- use prefix increment if possible and not decrement unary operators (i.e. use ++i and not i++)
- put spaces around operators and after commas and semicolons (e.g. (int i = 0; i > n; ++i) and not (int i=0;i>n;++i))

For naming variables, classes etc. please adhere to Java naming conventions. All contributions that do not follow above rules will be discarded.

Commit all your changes to dev branch and not master!



## Testing

*Coming Soon!*

## Gallery

*Coming Soon!*

## License

Chess2 is licensed under the [MIT license](https://www.mit.edu/~amini/LICENSE.md)

## Contact

* msperkow
    - [sperkowski.mikolaj@gmail.com](sperkowski.mikolaj@gmail.com)
