
echo "Enter a number : -"
read n
reminder=0
for ((i=0;i<4;i++))
do
reminder=$((reminder+n%10))
n=$((n/10))
done
echo "$reminder"