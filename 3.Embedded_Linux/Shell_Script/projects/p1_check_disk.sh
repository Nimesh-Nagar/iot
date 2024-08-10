#!/bin/bash

echo "Check Disk Utilization in Linux "
mount=`df -h / | grep '/'| awk '{print $1}'`
disk_size=`df -h | grep $mount | awk '{print $5}' | cut -d '%' -f1`
echo "Your Root partion is mounted on $mount"
echo "$disk_size% of disk is Filled "

if [ $disk_size -gt 80 ];
then
    echo "Your Disk Utilization is more than 80%, Expand disk or Delete files soon"
else
    echo "Enough disk space is available "
fi
