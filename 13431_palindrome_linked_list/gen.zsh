#!/usr/bin/zsh

for i in $(seq 1 4); do
    echo $i | ./gen.py | tee testcases/in$i.txt | time ./judge > testcases/out$i.txt;
    diff <(cat testcases/in$i.txt | ./sln.py) testcases/out$i.txt;
done;
