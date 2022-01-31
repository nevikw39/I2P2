for i in $(seq 0 9); do
    ./gen.py | tee in${i}.txt | time ./sol > out$i.txt;
done;
