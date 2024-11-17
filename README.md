para usar el input ------> ask("escribe: ",number);

se debe mandar el IR a un archivo y ejecutarlo con clang. luego de eso el prog queda inutilizado
para cualquier otro archivo.

root@6c517d4139ff:/compilers/cobra/build # ./prog input.cobra > prog.ll
root@6c517d4139ff:/compilers/cobra/build # clang -o prog prog.ll
warning: overriding the module target triple with x86_64-pc-linux-gnu [-Woverride-module]
1 warning generated.
root@6c517d4139ff:/compilers/cobra/build # ./prog
