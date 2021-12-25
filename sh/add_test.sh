testcount=`ls -1 "src/$1" | grep -c ".in$"`
testcount=$((testcount + 1))

touch "src/$1/${testcount}.in"
touch "src/$1/${testcount}.out"

echo $testcount
