#!/bin/zsh

mkdir -p testcases

for i in $(seq 1 4); do
    echo $i | ./gen.py | tee testcases/in0$i.txt | time ./judge > testcases/out0$i.txt;
    diff <(./sln.py < testcases/in0$i.txt) testcases/out0$i.txt;
done;