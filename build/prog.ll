; ModuleID = 'CobraModule'
source_filename = "CobraModule"

@.str.int = private constant [3 x i8] c"%d\00"
@.str.float = private constant [3 x i8] c"%f\00"
@.str.str = private constant [3 x i8] c"%s\00"
@.str.nl = private constant [2 x i8] c"\0A\00"
@.str = private constant [29 x i8] c"este es una parte del show: \00"
@.str.1 = private constant [34 x i8] c" aca no debe haber salto de linea\00"
@.str.2 = private constant [18 x i8] c"escribe tu edad: \00"
@.str.3 = private constant [7 x i8] c"edad: \00"
@.str.4 = private constant [15 x i8] c"salto de linea\00"
@.str.5 = private constant [10 x i8] c"otro jiji\00"

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)

define i32 @main() {
entry:
  %0 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str)
  %1 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str.1)
  %2 = call i32 (ptr, ...) @printf(ptr @.str.nl)
  %3 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str.2)
  %var = alloca i32, align 4
  %4 = call i32 (ptr, ...) @scanf(ptr @.str.int, ptr %var)
  %load_value = load i32, ptr %var, align 4
  %5 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str.3)
  %6 = call i32 (ptr, ...) @printf(ptr @.str.int, i32 %load_value)
  %7 = call i32 (ptr, ...) @printf(ptr @.str.nl)
  %8 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str.4)
  %9 = call i32 (ptr, ...) @printf(ptr @.str.nl)
  %10 = call i32 (ptr, ...) @printf(ptr @.str.str, ptr @.str.5)
  %11 = call i32 (ptr, ...) @printf(ptr @.str.nl)
  ret i32 1
}
