#!/bin/bash
echo "Enter the value of n"
read n 
for ((i=0;i<=n;i++))
do 
if ((i%2==0))
then
echo "Given $i is even : "
else 
echo "Given $i is odd : "
fi
done 
