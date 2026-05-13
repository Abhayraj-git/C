#!/bin/bash
echo "Enter the value of n : "
read n
echo "fabonacci series :- "
a=0
b=1
sum=0
for((i=0;i<n;i++))
do 
sum=$((a+b))
a=$b
b=$sum
echo "$a"
done