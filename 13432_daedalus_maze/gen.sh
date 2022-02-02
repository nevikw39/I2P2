for i in $(seq 0 4); do
    ./gen.py | tee in${i}.txt | time ./judge > out$i.txt;
done;
