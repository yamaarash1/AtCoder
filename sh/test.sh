ls -1 "src/$1" | grep -c ".in$" | xargs -I@ echo "[*] @ cases found"
echo

for file in `ls -1 "src/$1" | grep -E ".in$" | sed 's/\.[^\.]*$//'`; do
  echo "[*] testcase: ${file}"

  start_time=`date +%s%3N`
  cat "src/$1/${file}.in" | ./a.out > testout
  end_time=`date +%s%3N`
  time=$((end_time - start_time))
  echo "[x] time: ${time} ms"

  diff "src/$1/${file}.out" testout > /dev/null 2>&1
  if [ $? -eq 0 ]; then
    echo "[+] AC"
  elif [ $? -eq 1 ]; then
    echo "[-] WA"
    cp testout "src/$1/${file}.out.wa"
  fi

  rm testout
  echo
done
