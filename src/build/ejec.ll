; ModuleID = 'CobraModule'
source_filename = "CobraModule"

@.str = private constant [4 x i8] c"%d\0A\00"

declare i32 @printf(ptr, ...)

define i32 @main() {
begin:
  %val1 = alloca i32, align 4
  store i32 1, ptr %val1, align 4
  %load_value = load i32, ptr %val1, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @.str, i32 %load_value)
  ret i32 1
}
