#!/usr/bin/zsh

for i in $(seq 1 4); do
    echo $i | ./gen.py | tee testcases/in$i.txt | time ./sol > testcases/out$i.txt;
    diff <(cat testcases/in$i.txt | ./sol.py) testcases/out$i.txt;
done;
