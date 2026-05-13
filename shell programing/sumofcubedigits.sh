echo "Enter a number n "
read n 
sum=0
reminder=0
for ((i=0;i<n;i++))
do
number=i
while((number>0))
do
reminder=$((number%10))
sum=$((sum+reminder*reminder*reminder))
number=$((number/10))
done 
if ((sum==i))
then
echo "The amsstrong number is $i"
fi
done
