; ModuleID = 'CobraModule'
source_filename = "CobraModule"

@.str.int = private constant [3 x i8] c"%d\00"
@.str.float = private constant [3 x i8] c"%f\00"
@.str.str = private constant [3 x i8] c"%s\00"
@.str.nl = private constant [2 x i8] c"\0A\00"

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)

define i32 @main() {
entry:
  %escala = alloca [10 x i32], align 4
  %rangepointer = getelementptr [10 x i32], ptr %escala, i32 0, i32 0
  store i32 1, ptr %rangepointer, align 4
  %rangepointer1 = getelementptr [10 x i32], ptr %escala, i32 0, i32 1
  store i32 2, ptr %rangepointer1, align 4
  %rangepointer2 = getelementptr [10 x i32], ptr %escala, i32 0, i32 2
  store i32 3, ptr %rangepointer2, align 4
  %rangepointer3 = getelementptr [10 x i32], ptr %escala, i32 0, i32 3
  store i32 4, ptr %rangepointer3, align 4
  %rangepointer4 = getelementptr [10 x i32], ptr %escala, i32 0, i32 4
  store i32 5, ptr %rangepointer4, align 4
  %rangepointer5 = getelementptr [10 x i32], ptr %escala, i32 0, i32 5
  store i32 6, ptr %rangepointer5, align 4
  %rangepointer6 = getelementptr [10 x i32], ptr %escala, i32 0, i32 6
  store i32 7, ptr %rangepointer6, align 4
  %rangepointer7 = getelementptr [10 x i32], ptr %escala, i32 0, i32 7
  store i32 8, ptr %rangepointer7, align 4
  %rangepointer8 = getelementptr [10 x i32], ptr %escala, i32 0, i32 8
  store i32 9, ptr %rangepointer8, align 4
  %rangepointer9 = getelementptr [10 x i32], ptr %escala, i32 0, i32 9
  store i32 10, ptr %rangepointer9, align 4
  %i = alloca i32, align 4
  store i32 0, ptr %i, align 4
  %counter = alloca i32, align 4
  store i32 0, ptr %counter, align 4
  br label %loop

loop:                                             ; preds = %body, %entry
  %0 = load i32, ptr %counter, align 4
  %1 = icmp slt i32 %0, 10
  %2 = add i32 %0, 1
  store i32 %2, ptr %counter, align 4
  br i1 %1, label %body, label %afterloop

afterloop:                                        ; preds = %loop
  ret i32 1

body:                                             ; preds = %loop
  %i10 = load i32, ptr %i, align 4
  %elementPtr = getelementptr [10 x i32], ptr %escala, i32 0, i32 %i10
  %load_element = load i32, ptr %elementPtr, align 4
  %3 = call i32 (ptr, ...) @printf(ptr @.str.int, i32 %load_element)
  %4 = call i32 (ptr, ...) @printf(ptr @.str.nl)
  %i11 = load i32, ptr %i, align 4
  %addtmp = add i32 %i11, 1
  store i32 %addtmp, ptr %i, align 4
  br label %loop
}
