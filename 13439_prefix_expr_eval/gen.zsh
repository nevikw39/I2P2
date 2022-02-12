#!/usr/bin/zsh

for i in $(seq 1 4); do
    echo $i;
    ./gen > testcases/in$i.txt 2> testcases/out$i.txt;
    diff <(time ./sln < testcases/in$i.txt) testcases/out$i.txt;
done;
