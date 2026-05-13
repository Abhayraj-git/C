#!/bin/bash
echo "Enter the value of n : "
read n
sumeven=0
sumodd=0
for ((i=0;i<=n;i++))
do 
if ((i%2==0))
then
sumeven=$((sumeven+i))
else 
sumodd=$((sumodd+i))
fi
done 
echo "sum is $sumeven"
echo "sum is $sumodd"