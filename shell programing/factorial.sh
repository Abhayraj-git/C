#!/bin/bash
echo "Enetr the value of n : "
read n
factorial=1
for ((i=1;i<=n;i++))
do
factorial=$((factorial*i))
done
echo "$factorial"
