qsub -N PlasmaCombustion -l walltime=00:30:00,nodes=8:ppn=12 ./taub_job.sh
qstat -u msm6