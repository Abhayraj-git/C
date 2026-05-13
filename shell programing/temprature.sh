#!/bin/bash
echo "Enter the temprature in farnehite : "
read fernehite 
celsius=$(echo "scale=2; ($fernehite - 32) * 5 / 9" | bc)
echo "$celsius"