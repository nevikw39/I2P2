#!/bin/zsh

mkdir -p testcases

for i in $(seq 1 9); do
    echo $i | ./gen.py | tee testcases/in0$i.txt | time ./judge > testcases/out0$i.txt;
done;
