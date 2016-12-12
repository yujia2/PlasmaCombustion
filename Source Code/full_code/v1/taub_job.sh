#!/bin/sh
#PBS -q cse
#PBS -l nodes=1:ppn=4
#PBS -N numt
#PBS -j oe
#PBS -l walltime=00:05:00

cd /home/msm6/ProjectTest
~/taub_scripts/gennodelist.sh > nodelist

#echo "Program Starting"
./charmrun ++nodelist nodelist ./run +p96
#./charmrun ./run +p12
