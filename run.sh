!/bin/sh

cd kernel &&
make clean && 
make kernel &&
cd .. &&
make clean &&
make run

